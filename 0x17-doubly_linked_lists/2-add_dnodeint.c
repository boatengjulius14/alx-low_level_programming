#include "lists.h"

/**
 * add_dnodeint - adds a new at the beginning of a list
 * @head: pointer to pointer to first node
 * @n: integer
 * Return: Address of a the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (node);
	}
	node->next = *head;
	(*head)->prev = node;
	*head = node;
	return (node);
}
