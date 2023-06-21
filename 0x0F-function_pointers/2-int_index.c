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

        if (size <= 0)
        {
                return (-1);
        }

        for (i = 0; i < size; i++)
        {
                if (cmp(array[i] != 0))
		{
		
		return (i);
		}
        }
        return (-1);
}
