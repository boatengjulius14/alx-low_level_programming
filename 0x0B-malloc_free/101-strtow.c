#include <stdlib.h>
#include "main.h"

/**
 * wordCount - performs word count
 * @str: pointer to string
 * Return: word_count, number of words
 */

int wordCount(char *str)
{
	int i = 0, word_count = 0;

	while (str[i])
	{
		if (str[i] == ' ')
		{
			i++;
			continue;
		}
		else
			word_count++;
		i++;
	}
	return (word_count);
}

/**
 * word_len - performs a word count
 * @str: pointer to string
 * @space_no: number of spaces
 * Return: word_len, length of word
 */

int word_len(char *str, int space_no)
{
	int wordNum = 0;

	for (int i = space_no; str[i] != '\0' && str[i] != ' '; i++)
		wordNum++;
	return (wordNum);
}

/**
 * strtow - splits a string into words
 * @str: pointer to string
 * Return: letters, pointer to a string of words
 */

char **strtow(char *str)
{
	if (str == NULL || str[0] == '\0')
		return (NULL);

	int count = wordCount(str);

	char **letters = malloc(sizeof(char *) * (count + 1));

	if (letters == NULL)
		return (NULL);

	int space_no = 0;
	int a = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			space_no = i + 1;

		else if (i == 0 || str[i - 1] == ' ')
		{
			int wordNum = word_len(str, space_no);

			letters[a] = malloc(sizeof(char) * (wordNum + 1));
			if (letters[a] == NULL)
			{
				for (int j = 0; j < a; j++)
					free(letters[j]);
				free(letters);
				return (NULL);
			}

			for (int j = 0; j < wordNum; j++)
				letters[a][j] = str[space_no + j];
			letters[a][wordNum] = '\0';
			a++;
		}
	}
	letters[a] = NULL;
	return (letters);
}
