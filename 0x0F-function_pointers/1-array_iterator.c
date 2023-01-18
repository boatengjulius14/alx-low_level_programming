#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each
 * elecment of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !size || !array)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
