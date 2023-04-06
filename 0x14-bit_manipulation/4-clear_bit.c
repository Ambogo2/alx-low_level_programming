#include <stddef.h>
#include "main.h"

/**
 * clear_bit - Afunction that sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 if successful, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1ul << index);
	return (1);
}
