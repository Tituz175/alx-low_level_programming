#include "lists.h"

/**
 * print_list -> print the element of a singly linked list.
 * @h: the address to the first list node.
 * Return: the total number of node in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
