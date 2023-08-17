#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*add_dnodeint - adds a new node at the beginning
*@head: pointer to the head pointer of the list
*@n:value to be added to the node
*Return: address of the new elemet, NULL if fails.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (newNode);
}
