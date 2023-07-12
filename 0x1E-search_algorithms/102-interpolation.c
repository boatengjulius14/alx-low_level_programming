#include "search_algos.h"
/**
 * interpolation_search - searches for a value using Binary search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of the elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if array is NULL
 * or value is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		size_t index = left + (((double)(right - left) /
					(array[right] - array[left])) *
					(value - array[left]));

		if (index >= size)
		{
			printf("Value checked array[%ld] is out of range\n", index);
			break;
		}
		else
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		else if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}
	return (-1);
}
