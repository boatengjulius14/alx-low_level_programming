#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to pointer to first node
 * @index: position
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (!*head)
		return (-1);
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		temp = NULL;
		return (1);
	}
	if (index == (count - 1))
	{
		while (temp->next)
			temp = temp->next;
		temp->prev->next = NULL;
		free(temp);
		temp = NULL;
		return (1);
	}
	while (index > 0)
	{
		temp = temp->next;
		if (!temp)
			return (-1);
		index--;
	}
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp), temp = NULL;
	while ((*head)->prev)
		*head = (*head)->prev;
	return (1);
}
