#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
    list_t *newNode;
    int len = strlen(str);

    newNode = malloc(sizeof(list_t));

    if (newNode == NULL)
        return (NULL);

    newNode->str = strdup(str);
    newNode->len = len;
    newNode->next = *head;
    *head = newNode;


    return (*head);
}