#include "lists.h"

/**
 * sum_dlistint -> this function sum the
 * number in a linked list
 * @head: the head of the list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (total);

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
