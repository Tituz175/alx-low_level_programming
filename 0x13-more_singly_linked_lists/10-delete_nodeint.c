#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node by a given
 *                           index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 *         (indices starting at 0)
 * Return: 1 - if function succeeds,
 *        -1 - if function fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int count;
	listint_t *temp, *node = *head;

	if (node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	for (count = 1; count < (int)index && node != NULL; count++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	temp = node->next;
	node->next = temp->next;
	free(temp);

	return (1);
}
