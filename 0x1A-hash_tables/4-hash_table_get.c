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

	if (ht == NULL || key == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	while(ht->array[idx] != NULL)
	{
		if (*(ht->array[idx]->key) == *key)
		{
			return (ht->array[idx]->value);
		}
		ht->array[idx] = ht->array[idx]->next;
	}
	return (NULL);
}
