#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	if (index == count)
		return (head);
	while (head)
	{
		if (count == index)
			break;
		head = head->next;
		count++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
