#include "hash_tables.h"

/**
 * hash_table_get -> this function retrieves a value associated with a key
 * @ht: the hash table
 * @key: the given key to look up
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL || index >= ht->size)
		return (NULL);

	return (ht->array[index]->value);
}
