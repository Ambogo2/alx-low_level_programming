#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
*string_nconcat - a function that concatenates two strings
*@s1:string to be concateneted
*@s2:string to be concateneted
*@n:argument
*Return:pointer if success, NULL if unsuccessful
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;

	size_t length1, length2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = strlen(s1);
	length2 = strlen(s2);
	if (n >= length2)
	{
		n = length2;
	}
	concat = (char *)malloc(length2 + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	memcpy(concat, s1, length1);
	memcpy(concat + length1, s2, n);
	concat[length2 + n] = '\0';

	return (concat);
}
