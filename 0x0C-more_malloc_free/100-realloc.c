#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: rptr, ptr, pointer to reallocated memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *rptr, *nptr;

	nptr = ptr;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		rptr = malloc(new_size * sizeof(char));
		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < old_size; i++)
			*(rptr + i) = *(nptr + i);
		return ((void *)rptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		rptr = malloc(new_size * sizeof(char));
		if (rptr == NULL)
			return (NULL);

		for (i = 0; i < old_size; i++)
			rptr[i] = nptr[i];

		return ((void *)rptr);
	}
	free(ptr);
	return (rptr);
}
