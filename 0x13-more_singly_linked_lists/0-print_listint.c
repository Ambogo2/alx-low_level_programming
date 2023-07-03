#include <stdio.h>
#include "lists.h"

/**
*print_listint - prints elements of a list
*@h: pointer to the list to be printed
*Return: the number of nodes printed
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		
		printf("%d\n", h->n);
		
		h = h->next;
		count++;
	}

	return (count);
}
