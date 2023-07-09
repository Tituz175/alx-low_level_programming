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
	unsigned long int index, i;
	hash_node_t *new_node;
	char *dup_value;

	if (ht == NULL || *key == '\0' || *value == '\0')
	{
		return (0);
	}

	dup_value = strdup(value);
	if (dup_value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_value;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = dup_value;
	new_node->next = NULL;
	ht->array[index] = new_node;

	return (1);
}
