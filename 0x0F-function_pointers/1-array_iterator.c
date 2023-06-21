#include "function_pointers.h"

/**
 *array_iterator - a function that executes array elements
 *@array:an argument to pass an array of integers
 *@size:length of the array
 *@action:function pointer that accepts integer arguments
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
