#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arugments of your program.
 * @ac: argument count
 * @av: array of input strings
 * Return: arr, final string on success. NULL for error
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j, a, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			count++;
			j++;
		}
		count++;
	}
	arr = malloc((sizeof(char) * count) + 1);
	if (arr == NULL)
		return (NULL);
	i = 0;
	for (i = 0; i < ac; i++)
	{
		a = 0;
		j = 0;
		while (av[i][j])
		{
			arr[a] = av[i][j];
			a++;
			j++;
		}
		arr[a] = '\n';
		a++;
	}
	arr[a] = '\0';
	return (arr);
}
