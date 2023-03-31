#include "lists.h"

void free_list(list_t *head)
{
    list_t *currentNode;

    while ((currentNode = head) != NULL)
    {
        head = head->next;
        free(currentNode->str);
        free(currentNode);
    }
}