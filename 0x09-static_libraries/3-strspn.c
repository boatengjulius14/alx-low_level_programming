#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *@s: string 1, where substring would be derived
 *@accept: string 2
 *Return: sum, number matching elements
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, sum = 0, i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				sum++;
				break;
			}
			if (s[i] != accept[j])
			{
				if (accept[j + i] == '\0')
					return (sum);
			}
		}
		i++;
	}
	return (sum);
}
