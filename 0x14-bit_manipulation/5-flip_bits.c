#include <stddef.h>
#include "main.h"

/**
 * flip_bits - a function that counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count++;
		xor_result &= (xor_result - 1);
	}
	return (count);
}
