#include "hash_tables.h"


void hash_table_print(const hash_table_t *ht)
{
    unsigned long int index = 0;

    printf("{");
    for (; index < ht->size; index++)
    {
        if (ht->array[index] != NULL)
        {
            printf("'%s': '%s', ", ht->array[index]->key, ht->array[index]->value);
        }
    }
    printf("}\n");
}