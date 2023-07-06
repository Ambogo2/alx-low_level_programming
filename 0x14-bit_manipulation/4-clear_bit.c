#include "main.h"

/**
*clear_bit- sets a value of a bit to 0
*@n:a pointer unsigned int value
*@index:index starting from 0
*Return:1 if it worked, -1 if error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1UL << index);
	*n = *n & mask;

	return (1);
}
