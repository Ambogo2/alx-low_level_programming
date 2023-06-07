#include <stdio.h>

/**
 * is_prime_number- finds the prime number
 * @n:Argument
 * Return- return 1 if it is an integer otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_number n (n - 1));
}
