#include "lists.h"

/**
 * free_list -> this function free the memory of
 * a singly link list.
 * @head: the address of the first node of the list.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *currentNode;

	while ((currentNode = head) != NULL)
	{
		head = head->next;
		free(currentNode->str);
		free(currentNode);
	}
}
