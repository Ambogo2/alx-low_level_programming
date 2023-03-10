#include "main.h"

/**
 * _strcat - a function that concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:a pointer which is the destination string
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] ; i++)
		destlen++;
	for (i = 0; src[i] ; i++)
		 srclen++;
	for (i = 0 ; i <= srclen ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
