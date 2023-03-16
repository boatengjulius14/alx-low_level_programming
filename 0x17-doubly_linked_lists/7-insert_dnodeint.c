#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to first node
 * @idx: index (position)
 * @n: data
 * Return: the address of a new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp;

	if (!*h)
		return (NULL);
	temp = *h;
	while (idx > 1)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
		idx--;
	}
	if (!temp->prev && idx == 0)
	{
		node = add_dnodeint(h, n);
		if (!node)
			return (NULL);
		return (node);
	}
	if (!temp->next)
	{
		node = add_dnodeint_end(h, n);
		if (!node)
			return (NULL);
		return (node);
	}

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	node->next = temp->next;
	node->prev = temp;
	temp->next->prev = node;
	temp->next = node;
	return (node);
}
