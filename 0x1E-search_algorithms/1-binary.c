#include "search_algos.h"
/**
 * binary_search - searches for a value using Binary search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of the elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if array is NULL
 * or value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, r = size - 1;

	if (!array)
		return (-1);

	while (r >= l)
	{
		printf("Searching in array: ");

		i = l;
		while (i < r)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
