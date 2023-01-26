#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		count++;
		if (!ptr->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
