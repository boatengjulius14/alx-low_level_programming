#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to pointer to head
 * Return: the head node's data, or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int data;

	if (!*head)
		return (0);

	data = (*head)->n;
	*head = tmp->next;
	free(*tmp);
	return (data);
}


