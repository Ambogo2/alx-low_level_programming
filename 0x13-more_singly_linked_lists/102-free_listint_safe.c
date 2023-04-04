#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *slow, *fast;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast != NULL && fast != slow)
	{
		free(slow);
		count++;
		slow = fast;
		fast = fast->next;
		if (fast != NULL)
			fast = fast->next;
	}

	free(slow);
	count++;

	slow = fast = NULL;
	*h = NULL;

	return (count);
}
