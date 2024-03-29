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

	int file, w = 1, count = 0;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[count])
			count++;
	}

	w = write(file, text_content, count);
	if (w == -1)
	{
		return (-1);
	}

	close(file);
	return (1);
}
