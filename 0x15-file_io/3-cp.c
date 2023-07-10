#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

void error_98(int fd_from, char *buffer, char *argv);
void error_99(int fd_from, char *buffer, char *argv);
void error_100(int fd_from, char *buffer);

/**
 * error_98 - Checks for error 98.
 * @fd_from: The file descriptor to be checked.
 * @buffer: Buffer.
 * @argv: Argument array.
 */
void error_98(int fd_from, char *buffer, char *argv)
{
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
 * error_99 - Checks for error 99.
 * @fd_to: The file descriptor to be checked.
 * @buffer: Buffer.
 * @argv: Argument array.
 */
void error_99(int fd_to, char *buffer, char *argv)
{
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv);
		free(buffer);
		exit(99);
	}
}

/**
 * error_100 - Checks for error 100.
 * @result: The value to be checked.
 * @buffer: Buffer.
 */
void error_100(int result, char *buffer)
{
	if (result < 0)
	{
		dprintf(STDERR_FILENO, "Error: Failed to close file\n");
		free(buffer);
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
	int fd_from, fd_to, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
	{
		return (0);
	}

	fd_from = open(argv[1], O_RDONLY);
	error_98(fd_from, buffer, argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0644);
	error_99(fd_to, buffer, argv[2]);

	do {
		r = read(fd_from, buffer, BUFFER_SIZE);
		if (r == 0)
		{
			break;
		}
		error_98(fd_from, buffer, argv[1]);
		write(fd_to, buffer, r);
		error_99(fd_to, buffer, argv[2]);
	} while (r >= BUFFER_SIZE);

	r = close(fd_from);
	error_100(r, buffer);
	r = close(fd_to);
	error_100(r, buffer);

	free(buffer);
	return (0);
}
