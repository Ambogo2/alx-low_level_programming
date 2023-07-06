#include "main.h"

/**
*get_bit - gets a value at a given index
*@n:a number to be printed
*@index:starting from 0
*Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0;
	int value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	value = (n & mask) >> index;

	return (value);
}
