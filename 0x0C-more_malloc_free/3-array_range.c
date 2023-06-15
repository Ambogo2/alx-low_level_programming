#include <stdlib.h>
#include "main.h"

/**
*array_range - a function that creates an array of integers
*@min:minimum array value
*@max:maximum array value
*Return:pointer array if sucessfull, NULL if unsucessful
*/

int *array_range(int min, int max)
{
	int *array;
	int i;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
