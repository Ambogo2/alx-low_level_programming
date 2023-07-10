#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to file
 * @filename: a pointer to the file to be appended
 * @text_content: a pointer to the string to append to
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int o , w, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);

	w = write(o, text_content, len);
	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
