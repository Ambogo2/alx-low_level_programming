#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	prev = *head;
	for (i = 0; i < index - 1 && prev->next != NULL; i++)
		prev = prev->next;

	if (i < index - 1 || prev->next == NULL)
		return (-1);

	tmp = prev->next;
	prev->next = tmp->next;
	free(tmp);

	return (1);
}
