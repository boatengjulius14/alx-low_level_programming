#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to first node
 * Return: number of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}