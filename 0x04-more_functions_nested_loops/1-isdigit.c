#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: pass in an integer
 * Return: an integer value
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
