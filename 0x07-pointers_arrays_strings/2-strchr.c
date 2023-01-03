#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: address of string literal
 *@c: character being searched for
 *Return: s upon first location on c, 0 if c was not located
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
