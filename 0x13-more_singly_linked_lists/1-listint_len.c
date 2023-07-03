#include <stdio.h>
#include "lists.h"

/**
*listint_len- prints length of node elements
*@h: pointer to the list to be printed
*Return: the length of nodes elements
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
