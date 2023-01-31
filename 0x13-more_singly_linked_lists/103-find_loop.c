#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to first node
 * Return: The address of the node where the loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	int diff;

	if (!head)
		return (NULL);
	for (; head;)
	{
		diff = head - head->next;
		if (!head->next)
			diff = (long int)head;
		if (diff > 0)
			head = head->next;
		else
			return (head->next);
	}
	return (NULL);
}
