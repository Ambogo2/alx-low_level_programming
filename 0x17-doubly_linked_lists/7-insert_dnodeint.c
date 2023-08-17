#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a list
 * @head: Pointer to the head of the linked list
 * @idx: Index where the new node should be inserted (starting from 0)
 * @n: Data to be stored in the new node
 *
 * Return: Address of the new node if successful, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	
	dlistint_t *newNode, *current;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}

	/* Insert at the beginning if idx is 0 */
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	/* Traverse the list to the desired position */
	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	/* If the desired position was not reached */
	if (current == NULL)
	{
		return (NULL);
	}

	/* Create a new node and insert it */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = current;	
	newNode->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = newNode;
	}

	current->next = newNode;

	return (newNode);
}
