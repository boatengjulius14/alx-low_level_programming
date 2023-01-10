#include "main.h"

/**
 *create_array - creates an array of chars, and intialize it with a specific
 *char
 *@size: array size
 *@c: element of the arr
 *Return: NULL, if size is equal to 0 or memory is not allocated. Pointer
 *to the array, arr on success
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(arr + i) = c;

	return (arr);
}
