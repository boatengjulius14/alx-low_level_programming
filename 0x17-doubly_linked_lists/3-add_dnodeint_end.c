#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to pointer to first node
 * @n: integer
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (!*head)
	{
		*head = node;
		return (node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = node;
	node->prev = temp;
	return (node);
}
