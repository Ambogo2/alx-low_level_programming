#include "lists.h"

/**
 * find_listint_loop- finds a loop in a linked list
 * @head: pointer to the head 
 * Return: head nodes, or 0 if it list is empty
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
