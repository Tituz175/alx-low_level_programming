#include "lists.h"

/**
 * add_node_end -> this function adds a new node
 * to the end of a singly link list.
 * @head: the address of the first node in the list.
 * @str: the string to be copied to the new node.
 * Return: the address of the new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *currentNode;
	int len = strlen(str);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;
	currentNode = *head;

	if (currentNode == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}

	return (*head);
}
