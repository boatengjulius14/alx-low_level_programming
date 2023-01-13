#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - multiples two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc < 2)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
