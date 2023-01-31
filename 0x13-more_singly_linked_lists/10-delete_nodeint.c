#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list
 * @head: pointer to pointer to first node
 * @index: index, position of node to be deleted
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *tmp1;

	tmp = *head;

	if (!*head)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(tmp);
		if (!tmp)
			return (1);
		else
			return (-1);
	}

	for (i = 0; i < (index - 1); i++)
		tmp = tmp->next;
	tmp1 = tmp->next;
	tmp->next = tmp->next->next;

	free(tmp1);
	if (!tmp1)
		return (1);
	else
		return (-1);
}
