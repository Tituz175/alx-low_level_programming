#include "lists.h"

/**
 * add_node -> this function add a new node at
 * the start of a singly link list.
 * @head: the address to the first node.
 * @str: the string to be copied to the node.
 * Return: the address of the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len = strlen(str);

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
