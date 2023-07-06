#include "main.h"

/**
*flip_bits - flips bits
*@n:operand 1
*@m:operand 2
*Return:the number of bits to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;
	unsigned int i;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((xor_result >> i) & 1)
		{
			count++;
		}
	}

	return (count);
}
