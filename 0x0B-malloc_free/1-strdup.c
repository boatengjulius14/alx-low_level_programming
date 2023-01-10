#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory with a
 * copy of str
 * @str: string to copy
 * Return: NULL if str = NULL or space not allocated. arr for success
 */

char *_strdup(char *str)
{
	char *arr;
	int i, count;

	if (str == NULL)
		return (NULL);

	count = 0;
	while (*(str + count))
		count++;
	arr = malloc((count + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		arr[i] = str[i];

	return (arr);
}
