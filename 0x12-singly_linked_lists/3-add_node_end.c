#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a linked list.
 * @head: Address of the head pointer.
 * @str: String to be added as the content of the new node.
 * Return: Address of the new element or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
