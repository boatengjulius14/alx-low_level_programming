#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to first node
 * @index: node number
 * Return: nth node of a linked list, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	for (i = 0; i < index; i++)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	return (tmp);
}
