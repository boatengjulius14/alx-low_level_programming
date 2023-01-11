#include <stdlib.h>
#include "main.h"

/**
 * rec_word_count - performs a word count
 * @str: pointer to string
 * @i: iterator
 * Return: word count on success, 0 for failure.
 */

int rec_word_count(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + rec_word_count(str, i + 1));
	return (rec_word_count(str, i + 1));
}

/**
 * word_len - returns word count
 * @str: pointer to string
 * Return: number of words
 */

int word_len(char *str)
{
	if (str[0] != ' ')
		return (1 + rec_word_count(str, 0));
	return (rec_word_count(str, 0));
}

/**
 * strtow - splits a string into words
 * @str: pointer to string
 * Return: letters, pointer to a string of words
 */

char **strtow(char *str)
{
	char **letters;
	int i, a, b, count;

	if (str == NULL || str[0] == 0)
		return (NULL);
	count = word_len(str);
	if (count < 1)
		return (NULL);
	letters = malloc(sizeof(char *) * (count + 1));
	if (letters == NULL)
		return (NULL);
	i = 0;
	while (i < count && *str != '\0')
	{
		if (*str != ' ')
		{
			a = 0;
			while (str[a] != ' ')
				a++;
			letters[i] = malloc(sizeof(char) * (a + 1));
			if (letters[i] == NULL)
			{
				while (--i >= 0)
					free(letters[--i]);
				free(letters);
				return (NULL);
			}
			b = 0;
			while (b < a)
			{
				letters[i][b] = *str;
				b++, str++;
			}
			letters[i][b] = '\0';
			i++;
		}
		str++;
	}
	letters[i] = '\0';
	return (letters);
}
