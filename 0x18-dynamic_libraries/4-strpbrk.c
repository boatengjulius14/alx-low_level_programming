#include "main.h"

/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *@s: pointer 1
 *@accept: pointer 2
 *Return: s, pointer that matches required byte, NULL, if no matches are
 *found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
		i++;
		}
	s++;
	}
	return (0);
}
