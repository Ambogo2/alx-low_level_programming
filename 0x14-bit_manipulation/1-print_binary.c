#include "main.h"
#include <stdio.h>

/**
*print_binary - prints binary representation
*@n:a number to be printed in binary form
*/


void print_binary(unsigned long int n)
{
	unsigned long int mask = 0;
	int leading_zeros = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			leading_zeros = 0;
			printf("1");
		}
		else if (!leading_zeros)
		{
			printf("0");
		}

		mask >>= 1;
	}
}
