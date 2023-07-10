#include "hash_tables.h"

/**
 * hash_table_delete -> this function deletes a hash table
 *
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node, *next;

	for (; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];

			while (node != NULL)
			{
				next = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
