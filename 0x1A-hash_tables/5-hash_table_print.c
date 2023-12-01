#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - a function that that prints a hash table.
 * @ht:the hashtable
 * Return:void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			printf("{%s: %s}\n", current->key, current->value);
			current = current->next;
		}
	}
}
