#include <stdio.h>

/**
 *factorial- a funnction to find the factorial of a number
 *@n:parameter take in by the factorial function
 *Return- the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
