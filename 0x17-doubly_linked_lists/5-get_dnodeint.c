#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the linked list
 * @head: pointer to first node
 * @index: position(nth) of the node
 * Return: address of nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (temp)
	{
		count++;
		temp = temp->next;
	}

	if (index > count)
		return (NULL);

	while (index > 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
