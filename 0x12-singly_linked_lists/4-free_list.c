#include <stdlib.h>
#include "lists.h"

/**
*free_list - adds a node to a linked list
*@head:address of the head pointer
*Return:void
*/
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
