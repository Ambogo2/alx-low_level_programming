#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht:the hashtable
 * Return:void
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *next;
	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
 		while (temp != NULL)
    		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}
	free(ht->array);
	free(ht);
    
}
