#include "main.h"

/**
*get_endianness - checks for endiannessness
*
*Return:0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int num = 0x12345678;
	unsigned char *pt = (unsigned char *)&num;

	if (*pt == 0x78)
		return (1);
	else
		return (0);
}
