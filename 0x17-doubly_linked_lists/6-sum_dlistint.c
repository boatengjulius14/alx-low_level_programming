#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) of a linked list
 * @head: pointer to first node
 * Return: sum of all data, or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
