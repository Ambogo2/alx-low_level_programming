#include <stdio.h>

/**
 * _strlen_recursion- a function that returns the length of a string
 * @s:argument of the strlen function
 * Return:string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
