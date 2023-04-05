#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         or 0 - if the linked list is empty
 */

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
