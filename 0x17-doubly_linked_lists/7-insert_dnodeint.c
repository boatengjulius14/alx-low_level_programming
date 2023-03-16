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

	/* At start of list*/
	if (!temp->prev && idx == 0)
		return (add_dnodeint(h, n));

	/* At end of list*/
	if (!temp->next)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	/*Insertion*/
	node->next = temp->next;
	node->prev = temp;
	temp->next->prev = node;
	temp->next = node;
	return (node);
}
