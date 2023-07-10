#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int index = 0;
    hash_node_t *node;

    if (ht == NULL)
        return;

    printf("{");
    for (; index < ht->size; index++)
    {
        if (ht->array[index] != NULL)
        {
            node = ht->array[index];
            printf("'%s': '%s', ", node->key, node->value);
        }
    }
    printf("}\n");
}