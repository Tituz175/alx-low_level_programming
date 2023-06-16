#include "lists.h"

/**
 * dlistint_len -> this function print the total
 * length of a list
 * @h: the head of the list
 * Return: total length
 */

size_t dlistint_len(const dlistint_t *h)
{
	int total = 0;

	if (h == NULL)
		return (total);

	while (h)
	{
		total++;
		h = h->next;
	}

	return (total);
}
