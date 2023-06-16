#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	while (temp)
	{
		if (idx == count)
			break;
		temp = temp->next;
		count++;
	}

	if (temp)
	{
		new->prev = temp->prev;
		temp->prev->next = new;
		new->next = temp;
		temp->prev = new;
	}
	else
		return (NULL);
	return (new);

}
