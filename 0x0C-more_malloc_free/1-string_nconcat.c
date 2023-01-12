#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of string 2
 * Return: ptr, pointer to concatenated string. NULL if space was not
 * allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len_s1, len_s2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Size of strings*/
	len_s1 = 0;
	while (s1[len_s1])
		len_s1++;

	len_s2 = 0;
	while (s2[len_s2])
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	/*Memory allocation*/
	ptr = (char *)malloc((len_s1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	/*Concatenate strings*/
	for (i = 0; i < len_s1; i++)
		ptr[i] = s1[i];
	for (i = len_s1; i < len_s1 + n; i++)
		ptr[i] = s2[i - len_s1];

	ptr[i] = '\0';

	return (ptr);
}
