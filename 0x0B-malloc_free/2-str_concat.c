#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to allocated memory on sucess. NULL for error
 */

char *str_concat(char *s1, char *s2)
{
	char *conarr;
	int i = 0, count1 = 0, count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*length of the two strings*/
	while (s1[i])
	{
		count1++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		count2++;
		i++;
	}

	conarr = (char *)malloc((count1 + count2 + 1) * sizeof(char));
	if (conarr == NULL)
		return (NULL);

	/*Concatenates s1 and s2*/
	for (i = 0; i < count1 ; i++)
		*(conarr + i) = *(s1 + i);
	for (i = 0; i < count2 ; i++)
		*(conarr + count1 + i) = *(s2 + i);
	return (conarr);
}
