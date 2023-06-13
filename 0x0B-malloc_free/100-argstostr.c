#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
*argstostr - a function that concatenates arguments
*@ac:number of arguments
*@av:array of string arguments
*Return:a pointer to the concatenated string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{

	int i;
	int length = 0;
	char *result;
	int position = 0;
	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(length + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position] = '\n';
		position++;
	}

	result[length] = '\0';
	return (result);
}
