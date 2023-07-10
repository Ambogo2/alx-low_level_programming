#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * allocate_buffer - Allocates memory for the buffer.
 * @file: File name buffer is storing the characters for.
 *
 * Return: Pointer to the allocated buffer.
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = (char *)malloc(BUFFER_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_and_exit - Closes the file descriptor and exits with code 100.
 * @fd: The file descriptor to be closed.
 */
void close_and_exit(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content from one file to another.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_and_exit(fd_from);
	}

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_and_exit(fd_from);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_and_exit(fd_from);
	}

	free(buffer);
	close_and_exit(fd_from);
	close_and_exit(fd_to);

	return (0);
}
