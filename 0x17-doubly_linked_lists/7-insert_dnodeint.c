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

	while (temp)
	{
		if (idx == count)
			break;
		temp = temp->next;
		count++;
	}

	if (temp)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		else
		{
			new->n = n;
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
		}
	}
	else
		return (NULL);
	return (new);

}
