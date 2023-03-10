#include "main.h"

/**
 * _strncpy - a function that copies strings
 * @dest: destination storing the string copy.
 * @src: The source string.
 * @n: number of strings
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
