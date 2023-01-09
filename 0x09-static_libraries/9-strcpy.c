#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src, including null byte
 *@dest: transferred location
 *@src: string
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (n >= 0)
	{
		*(dest + n) = *(src + n);
		if (*(src + n) == '\0')
			break;
		n++;
	}
	return (dest);
}
