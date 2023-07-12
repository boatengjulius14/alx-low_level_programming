#include "search_algos.h"
/**
 * exponential_search - searches for a value using Exponential search
 *			algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of the elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if array is NULL
 * or value is not present
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t current = 1, mid, i, max;

	if (array == NULL)
		return (-1);

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		current *= 2;
	}

	max = (current < size - 1) ? current : size - 1;
	printf("Value found between indexes [%lu] and [%ld]\n", current / 2, max);
	current /= 2;

	while (current <= max)
	{
		mid = (current + max) / 2;

		printf("Searching in array: ");
		for (i = current; i <= max; i++)
		{
			printf("%d", array[i]);
			if (i < max)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			current = mid + 1;
		else
			max = mid - 1;
	}
	return (-1);
}
