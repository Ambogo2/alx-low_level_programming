#include "main.h"

/**
 * get_endianness - a function that checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *p = (char *)&n;

	return (*p);

}
