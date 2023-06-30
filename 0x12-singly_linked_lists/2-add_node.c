#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
*add_node - adds a node to a linked list
*@head:address of the head pointer
*@str:string to be added as the content of the new node.
*Return:address of the new element or NULL if fails.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

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
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(newNode->str);
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
