#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: address of string literal
 *@c: character being searched for
 *Return: s upon first location on c, 0 if c was not located
 */

char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if (s[0] == c)
			return (s);
		s++;
	}
	if (s[0] == c)
	{
		return (s);
	}
	return (0);
}
