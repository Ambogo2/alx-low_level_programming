#include "main.h"
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: a file where text is read from
 * @letters: number of letters the file should read and print
 * Return: the number of letters read and printed, 0 if file can't be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, w, r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);
	return (w);
}
