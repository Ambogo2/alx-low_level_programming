#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list, including lists with a loop
 * @h: Pointer to the head of the linked list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{
		 *h = NULL;
		return (count);
	}

	current = *h;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h)
		{
			break;
		}
	}

	*h = NULL;
	return (count);
}
