#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: A pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
	return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
