#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht:the hash table you want to look into
 * @key:key you are looking for
 * Return:the value associated with the element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
