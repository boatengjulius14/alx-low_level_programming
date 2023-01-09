#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: difference btn the 2 strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
