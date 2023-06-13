#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
*_strdup- a function that returns a pointer to a newly allocated memory
*@str:string
*Return:NULL if it fails, string pointer success
*/

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = (char *)malloc((strlen(str) + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);

	return (dup);

}
