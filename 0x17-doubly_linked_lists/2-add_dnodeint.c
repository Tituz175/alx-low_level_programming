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
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
