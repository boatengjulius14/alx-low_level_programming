#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to first node
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = *head;
	listint_t *nx;

	if (!(*head)->next)
		return (*head);

	while (nx)
	{
		if (prev == *head)
		{
			nx = (*head)->next;
			(*head)->next = NULL;
		}
		prev = *head;
		*head = nx;
		nx = nx->next;
		(*head)->next = prev;
	}
	return (*head);
}
