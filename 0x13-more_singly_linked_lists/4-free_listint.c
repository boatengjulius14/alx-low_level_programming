#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp->next)
	{
		head = tmp->next;
		free(tmp);
		tmp = head;
	}
	free(head);
}
