#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - Frees a listint_t linked list
 * @head: Pointer to the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
