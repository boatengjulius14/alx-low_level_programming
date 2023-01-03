#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: Address of destination array
 *@src: Address of copied array
 *@n: size of memory to be copied
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
