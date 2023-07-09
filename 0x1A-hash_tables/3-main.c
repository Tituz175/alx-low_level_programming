#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void ht_dump(hash_table_t *ht);

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "conflit_1");
    hash_table_set(ht, "mentioner", "conflit_2");

    ht_dump(ht);
    
    return (EXIT_SUCCESS);
}

void ht_dump(hash_table_t *ht) 
{
    unsigned long int i;

    for (i = 0; i < ht->size; ++i) {
        hash_node_t *entry = ht->array[i];

        if (entry == NULL) {
            continue;
        }

        printf("slot[%4ld]: ", i);

        for(;;) {
            printf("%s=%s ", entry->key, entry->value);

            if (entry->next == NULL) {
                break;
            }

            entry = entry->next;
        }

        printf("\n");
    }
}