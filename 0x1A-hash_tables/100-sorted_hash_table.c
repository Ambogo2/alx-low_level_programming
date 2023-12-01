#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates a sorted hash table
 * @size:size of the array
 * Return:a pointer to the newly sorted hash table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *table;
    unsigned long int i;

    table = malloc(sizeof(shash_table_t));
    if (table == NULL)
        return (NULL);

    table->size = size;
    table->array = malloc(sizeof(shash_table_t *) * size);
    if (table->array == NULL)
    {
        free(table);
        return (NULL);
    }

    for (i = 0; i < size; i++)
    {
        table->array[i] = NULL;
    }
        table->shead = NULL;
        table->stail = NULL;

    return (table);
}

/**
 *shash_table_set - adds an element to the sorted hash table
 *@ht:the hash table you want to add or update the key/value t
 *@key:the key
*@value:value assosiated with the key
*Return:1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current, *prev = NULL;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    current = ht->shead;

    while (current && strcmp(key, current->key) > 0)
    {
        prev = current;
        current = current->snext;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = current;
    if (prev)
        prev->snext = new_node;
    else
        ht->shead = new_node;

    return (1);
}

/**
 *shash_table_get - Retrieves a value from the sorted hash table
 *@ht:the sorted hashtable
 *@key:key
 *Return:The value associated with the key, or NULL if key not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *current;

    if (ht == NULL || key == NULL)
        return (NULL);

    current = ht->shead;

    while (current && strcmp(key, current->key) != 0)
        current = current->snext;

    return (current ? current->value : NULL);
}

/**
 *shash_table_print - prints hashtble
 *@ht:the sorted hashtable
 *Return:void
*/
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    current = ht->shead;

    printf("{");
    while (current)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        if (current)
            printf(", ");
    }
    printf("}\n");
}

/**
 *shash_table_print_rev - prints hashtable in reverse
 *@ht:the hashtable to be printed
 *Return:void
*/
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    current = ht->stail;

    printf("{");
    while (current)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->sprev;
        if (current)
            printf(", ");
    }
    printf("}\n");
}

/**
 *shash_table_delete - deletes hashtable
 *@ht:the hashtable to be deleted
 *Returns: void
*/
void C(shash_table_t *ht)
{
    shash_node_t *current, *temp;

    if (ht == NULL)
        return;

    current = ht->shead;

    while (current)
    {
        temp = current->snext;
        free(current->key);
        free(current->value);
        free(current);
        current = temp;
    }

    free(ht->array);
    free(ht);
}