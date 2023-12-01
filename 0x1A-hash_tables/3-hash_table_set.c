#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht:the hash table you want to add or update the key/value t
 * @key: is the key
 * @value:is the value associated with the key
 * return:1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *newNode;
    unsigned long int idx;

    if (ht == NULL || key == NULL || *key =='\0')
    {
        return (0);
    }
    newNode = malloc(sizeof(hash_node_t));
    if (newNode == NULL)
    {
        return (0);
    }
    newNode->key = strdup(key);
    newNode->value = strdup(value);

    idx = key_index((const unsigned char *)key, ht->size);
    if (newNode->key == NULL || newNode->value == NULL)
    {
        free(newNode->key);
        free(newNode->value);
        free(newNode);

        return (0);
    }
    newNode->next = ht->array[idx];
    ht->array[idx] = newNode;

    return (1);

}