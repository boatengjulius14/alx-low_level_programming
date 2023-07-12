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
 * search_range - Searches for a value within a given range in a skip list
 * @start: The starting node of the range
 * @end: The ending node of the range
 * @value: The value to search for
 *
 * Return: If the value is found, the node where the value is located;
 *         otherwise, NULL.
 */
skiplist_t *search_range(skiplist_t *start, skiplist_t *end, int value)
{
	skiplist_t *node = start;

	while (node != end)
	{
		print_value_checked(node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	print_value_checked(node->index, node->n);
	return (node->n == value ? node : NULL);
}

/**
 * linear_skip - Searches for a value in a sorted singly linked list
 *				of integers using linear skip.
 * @list: pointer to the head of the skip list to search in
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list;
	skiplist_t *jump = list;

	if (list == NULL)
		return (NULL);

	while (jump->next != NULL && jump->n < value)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	return (search_range(node, jump, value));
}
