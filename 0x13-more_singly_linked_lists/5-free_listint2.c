#include "lists.h"

/**
 * free_listint2 - free the linked list
 * @head : pointer to list
 * Return: void
 */

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
