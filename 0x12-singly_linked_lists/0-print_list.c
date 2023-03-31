#include "lists.h"

/**
 * print_list -> print the element of a singly linked list.
 * @h: the address to the first list node.
 * Return: the total number of node in the list
 */

size_t print_list(const list_t *h)
{
	size_t output;

	output = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		h = h->next;
		output++;
	}
	return (output);
}
