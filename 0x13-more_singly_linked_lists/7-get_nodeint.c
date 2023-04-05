#include "lists.h"



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *newNode;

    unsigned int count;

    for (count = 0; count <= index && head != NULL; count++)
    {
        newNode = head;
        head = head->next;
    }

    return (newNode);
}