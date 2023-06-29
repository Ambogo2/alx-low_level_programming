#include <stdio.h>

/**
 * is_prime_number- finds the prime number
 * @n:Argument
 * Return:return 1 if it is a prime number otherwise return 0
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}
