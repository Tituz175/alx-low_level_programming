#include "lists.h"

/**
 * list_len -> this function prints the length of a
 * singly link list.
 * @h: the address of the first node.
 * Return: the length of the list.
 */

size_t list_len(const list_t *h)
{
	size_t output = 0;

	while (h != NULL)
	{
		output++;
		h = h->next;
	}

	return (output);
}
