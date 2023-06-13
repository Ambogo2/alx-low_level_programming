#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*create_array - a fuction that creates an array of characters
*@size:the length of the array
*@c:the element to be initialized
*Return:0 if it fails, pointer to an array on success
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
        {
                return (NULL);
        }
        str = (char *)malloc(size * sizeof(char));
        if (str == NULL)
        {
                return (NULL);
        }
        for (i = 0; i < size; i++)
        {
                str[i] = c;
        }

        return (str);
}
