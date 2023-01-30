#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head pointer;
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (*head)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}
