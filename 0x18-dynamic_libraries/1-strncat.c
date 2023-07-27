#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: first string
 *@src: second string
 *@n: integer
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; i < n && src[i] ; i++)
		dest[j++] = src[i];

	return (dest);

}
