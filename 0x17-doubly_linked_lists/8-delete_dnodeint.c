#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a linked list
 * @head: Pointer to the head of the linked list
 * @index: Index of the node to be deleted (starting from 0)
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
		{
			return (-1);
		}

		current = current->next;
	}

	temp = current->next;

	if (temp == NULL)
	{
		return (-1);
	}

	current->next = temp->next;
	free(temp);

	return (1);
}
