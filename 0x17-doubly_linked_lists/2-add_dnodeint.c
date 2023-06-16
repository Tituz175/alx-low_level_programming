#include "lists.h"

/**
 * add_dnodeint -> this function add a new node
 * at the head of the list
 * @head: the head of the list
 * @n: the give number
 * Return: the address of the added new
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (temp == NULL)
		*head = new_node;
	else
	{
		temp->prev = new_node;
		new_node->next = temp;
		*head = new_node;
	}

	return (new_node);
}
