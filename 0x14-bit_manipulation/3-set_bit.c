#include "main.h"

/**
*set_bit - gets a value at a given index
*@n:a pointer to unsigned int
*@index:starting from 0
*Return: the value of the bit at index index or -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n = *n | mask;

	return (1);
}
