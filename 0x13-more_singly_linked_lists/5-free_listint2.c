#include "lists.h"



void free_listint2(listint_t **head)
{
    listint_t *temp;
    
    while (*head != NULL) 
    {
        temp = *head;
        *head = temp->next;
        free(temp);
    }
    
}