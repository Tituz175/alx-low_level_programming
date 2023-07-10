#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (comma == 1)
				printf(", ");

			node = ht->array[index];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);   
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
