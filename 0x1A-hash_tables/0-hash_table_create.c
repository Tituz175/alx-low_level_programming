#include "hash_tables.h"

/**
 * hash_table_create -> this function creates a	hash table
 *
 * @size: the size of the table array
 * Return: the pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * table->size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
