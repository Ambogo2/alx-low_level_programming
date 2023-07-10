#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: a pointer to the file to be created
 * @text_content: a pointer to the string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

	int fd, w, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
