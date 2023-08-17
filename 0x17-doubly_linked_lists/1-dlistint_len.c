#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
*dlistint_len - a function that finds the length of elements
*@h:pointer to the list to find the length
*Return:The number of elements in a linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
