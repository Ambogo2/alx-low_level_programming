#include <stdio.h>
#include "lists.h"

/**
*print_list - a function that prints elements
*@h:pointer to the list to be printed
*Return:The number of nodes to be printed
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
