#include <stdio.h>

/**
*_pow_recursion- a fuction that finds the power of an integer
 * @x:argument taken by pow function
 * @y:argument taken by pow function
 * Return:the power of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
