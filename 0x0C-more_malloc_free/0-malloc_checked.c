#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*malloc_checked - function that allocates memory
*@b:argument
*Return:pointer if successful, 98 if failed
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("terminate process\n");
		exit(98);
	}
	return (ptr);
}
