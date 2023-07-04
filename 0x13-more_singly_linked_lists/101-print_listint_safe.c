#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}

	if (slow != fast)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}

		exit(98);
	}

	return (count);
}
