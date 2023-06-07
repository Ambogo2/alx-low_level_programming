#include <stdio.h>

/**
 * _sqrt_recursion- a function that finds the squareroot of a number
 * @n:parameter taken by the function
 * Return- the squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n + _sqrt_recursion(n - 1));
}
