#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: s, pointer
 */

char *rot13(char *s)
{
	int i, sum;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	sum = 0;
	while (*(s + sum) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + sum) == letters[i])
			{
				*(s + sum) = rot13[i];
				break;
			}
		}
		sum++;
	}
	return (s);
}
