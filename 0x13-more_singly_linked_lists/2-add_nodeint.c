#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*add_nodeint - adds a new node at the beginning
*@head: pointer to the head pointer of the list
*@n:value to be added to the node
*Return: address of the new elemet, NULL if fails.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

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
