#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t linked list
 * @head: Pointer to the head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *nextNode;

	temp = head;

	while (temp != NULL)
	{
		nextNode = temp->next;
		free(temp);
		temp = nextNode;
	}
}
