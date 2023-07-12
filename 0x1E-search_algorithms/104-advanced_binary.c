#include "search_algos.h"
/**
 * binary_recursive - performs binary search
 * @array: pointer to the first element of the array to search in
 * @start: starting index of array
 * @end: ending index of array
 * @value: value being searched for
 *
 * Return: index of value being searched for
 *			or -1 if value is not found
*/
int binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t i, mid = start + (end - start) / 2;

	if (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = start + (end - start) / 2;
		if (array[mid] == value && (mid == start || array[mid - 1] != value))
			return (mid);
		else if (array[mid] >= value)
			return (binary_recursive(array, start, mid, value));
		return (binary_recursive(array, mid + 1, end, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value using advanced binary
 *					algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of the elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or
 *			-1 if array is NULL or value is not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
}
