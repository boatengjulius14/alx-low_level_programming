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
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	nptr = malloc(new_size * sizeof(char));
	if (nptr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			nptr[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (nptr);
	}

	while (i < new_size)
	{
		nptr[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (nptr);
}
