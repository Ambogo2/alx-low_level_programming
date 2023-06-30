#include <stdio.h>
#include "lists.h"

/**
*list_len - returns the number of elements in a linked list
*@h:pointer to the list to be printed
*Return:The number of elemets in the list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
