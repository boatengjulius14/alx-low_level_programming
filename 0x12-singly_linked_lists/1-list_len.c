#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked
 * list_t list
 * @h: pointer to address of first node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
