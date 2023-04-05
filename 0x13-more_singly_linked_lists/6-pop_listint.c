#include "lists.h"

int pop_listint(listint_t **head)
{
    int num;
    listint_t *temp;
    temp = *head;
    if (temp == NULL)
        return (0);

    num = temp->n;
    *head = temp->next;
    free(temp);

    return (num);
}