#include "search_algos.h"
/**
 * print_value_checked - Prints the value checked at a given index
 * @index: The index of the node being checked
 * @value: The value of the node being checked
 */
void print_value_checked(size_t index, int value)
{
	printf("Value checked at index [%lu] = [%d]\n", index, value);
}

/**
 * search_range - Searches for a value within a given range in a linked list
 * @start: The starting node of the range
 * @end: The ending node of the range
 * @value: The value to search for
 *
 * Return: If the value is found, the node where the value is located;
 *			otherwise, NULL.
 */
listint_t *search_range(listint_t *start, listint_t *end, int value)
{
	listint_t *node;

	for (node = start; node != end; node = node->next)
	{
		print_value_checked(node->index, node->n);
		if (node->n == value)
			return (node);
	}

	print_value_checked(node->index, node->n);
	return (node->n == value ? node : NULL);
}

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *				of integers using jump search algorithm.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: pointer to first node with the value, or
 *			NULL, if head is NULL or value is not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = 0, jump_size;
	listint_t *node, *cur;

	if (list == NULL || size == 0)
		return (NULL);
	jump_size = sqrt(size);
	node = cur = list;
	while (cur->index + 1 < size && cur->n < value)
	{
		node = cur;
		jump += jump_size;
		while (cur->index < jump)
		{
			if (cur->index + 1 == size)
				break;
			cur = cur->next;
		}
		print_value_checked(cur->index, cur->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			node->index, cur->index);
	return (search_range(node, cur, value));
}
