#include "search_algos.h"
/**
 * jump_search - searches for a value using Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if array is NULL
 * or value is not present
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, next = 0, jump;

	if (array == NULL || size == 0)
		return (-1);
	jump = sqrt(size);

	while (next < size && array[next] < value)
	{
		i = next;
		printf("Value checked array[%ld] = [%d]\n", next, array[next]);
		next += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, next);

	if (next >= size - 1)
		next = size - 1;

	while (i < next && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return (i);
	else
		return (-1);
}
