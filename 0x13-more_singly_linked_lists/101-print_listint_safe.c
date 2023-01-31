#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to pointer to first node
 * Return: count, number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp, *mv;
	size_t i, count = 0;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		mv = head;
		i = 0;
		while (i < count)
		{
			if (tmp == mv)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			mv = mv->next;
			i++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
