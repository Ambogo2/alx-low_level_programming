#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - deletes the head node a list
 * @head: pointer to the head to be deleted
 * Return: head nodes, or 0 if it list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;
	
	if (**head ==NULL)
	{
		return (0);
	}
	
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp)

	return (data);
}
