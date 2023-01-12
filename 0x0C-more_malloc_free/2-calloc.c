#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: no. of elements
 * @size: size of byte
 * Return: ptr, pointer to allocated memory. NULL if nmemb or size is 0, or
 * memory is not allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*Memory Allocation*/
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/*Setting to zero*/
	for (i = 0 ; i < nmemb ; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
