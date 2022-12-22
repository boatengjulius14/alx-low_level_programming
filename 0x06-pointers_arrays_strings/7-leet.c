#include "main.h"

/**
  *leet - encodes a string into 1337
  *@s: string
  *Return: pointer
  */

char *leet(char *s)
{
	int i, sum = 0;
	int num[] = {52, 51, 48, 55, 49};
	int letterupper[] = {65, 69, 79, 84, 76};
	int letterlower[] = {97, 101, 111, 116, 108};

	while (*(s + sum) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + sum) == letterupper[i] || *(s + sum) == letterlower[i])
			{
				*(s + sum) = num[i];
				break;
			}
		}
		sum++;
	}

	return (s);
}
