#include "function_pointers.h"

/**
 * int_index - a function that executes parameters of array elements
 *@array:array of elements
 *@size:number of elements in the array
 *@cmp:function pointer that compares values
 *Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
        int i;

        if (array == NULL || size <= 0 || cmp == NULL)
        {
                return (-1);
        }

        for (i = 0; i < size; i++)
        {
                if (cmp(array[i]))
		{
		
		return (i);
		}
        }
        return (-1);
}
