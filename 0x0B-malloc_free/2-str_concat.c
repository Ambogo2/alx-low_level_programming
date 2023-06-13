#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
*str_concat- a function that creates an array of characters
*@s1:string to be concatenated
*@s2:string to be concatenated
*Return:NULL if it fails, string pointer success
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t length1, length2;;

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

	concat = (char *)malloc((length1 + length2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);

}
