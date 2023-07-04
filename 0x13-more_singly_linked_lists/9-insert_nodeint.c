#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list
 * @head: Pointer to the head of the linked list
 * @idx: Index where the new node should be inserted (starting from 0)
 * @n: Data to be stored in the new node
 *
 * Return: Address of the new node if successful, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current = *head;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
		{
			return (NULL);
		}

		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			return (NULL);
		}

		current = current->next;
	}

	if (current == NULL)
	{
		return (NULL);
	}
	
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
