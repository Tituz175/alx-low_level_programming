#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s
{
    int n;
    struct list_s *next;
} listint_t;


size_t print_listint(const listint_t *h);
/*size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);*/

#endif