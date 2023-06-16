#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
		free(head);
	else
	{
		while (head->next)
		{
			current = head;
			head = head->next;
			free(current);
		}
		free(head);
	}
}
