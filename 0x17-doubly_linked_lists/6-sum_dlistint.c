#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of all the data (n) in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
