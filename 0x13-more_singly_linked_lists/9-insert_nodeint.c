#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to pointer to first node
 * @idx: position to insert new node
 * @n: data of new node
 * Return: address of new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *node;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		if (!tmp)
		{
			free(node);
			return (NULL);
		}
	}

	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
