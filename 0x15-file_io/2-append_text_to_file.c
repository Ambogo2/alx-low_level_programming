#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text to file
 * @filename: a pointer to the file to be appended
 * @text_content: a pointer to a string to be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int file, _write;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(file);
		return (1);
	}

	_write = write(file, text_content, strlen(text_content));
	if (_write == -1 || _write != (int)strlen(text_content))
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
