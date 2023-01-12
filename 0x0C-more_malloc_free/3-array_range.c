#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: ptr, pointer to newly created array or NULL
 */

int *array_range(int min, int max)
{
	int len, i, *ptr;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < len; i++)
		ptr[i] = min + i;

	return (ptr);
}
