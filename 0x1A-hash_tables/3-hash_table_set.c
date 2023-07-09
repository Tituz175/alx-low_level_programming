#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_set -> this function adds an element to the hash table
 *
 * @ht: the hash table to add or update the key/value pairs
 * @key: this is the key
 * @value: this is the value
 * Return: 1 if successful else 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (*key == '\0' || *value == '\0')
	{
		return (0);
	}

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
}
