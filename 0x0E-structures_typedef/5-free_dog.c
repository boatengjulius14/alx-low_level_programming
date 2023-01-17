#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees allocated memory of a struct
 * @d: pointer to struct to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}


