#include <stdlib.h>
#include "main.h"

/**
 * word_counter - returns word count
 * @str: pointer to string
 * Return: b, number of words
 */

int word_counter(char *str)
{
	int a = 0, b = 0, i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			b++;
		}
		i++;
	}

	return (b);
}

/**
 * strtow - splits a string into words
 * @str: pointer to string
 * Return: f_str, pointer to a string of words
 */

char **strtow(char *str)
{
	char **f_str, *stor;
	int i, j = 0, length = 0, word, a = 0, init, range;

	while (*(str + length))
		length++;
	word = word_counter(str);
	if (word == 0)
		return (NULL);

	f_str = (char **) malloc(sizeof(char *) * (word + 1));
	if (f_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				range = i;
				stor = (char *) malloc(sizeof(char) * (a + 1));
				if (stor == NULL)
					return (NULL);
				while (init < range)
					*stor++ = str[init++];
				*stor = '\0';
				f_str[j] = stor - a;
				j++;
				a = 0;
			}
		}
		else if (a++ == 0)
			init = i;
	}
	f_str[j] = NULL;
	return (f_str);
}
