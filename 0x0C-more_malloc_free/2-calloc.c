#include <stdlib.h>
#include <string.h>
#include"main.h"

/**
* _calloc - a function that allocates memory for an array
* @nmemb:number of elemenmts
* @size:size of each elements
* Return:pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	ptr = (char *)malloc(nmemb * size);
	if (ptr == NULL)
	{
	return (NULL);
	}

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
