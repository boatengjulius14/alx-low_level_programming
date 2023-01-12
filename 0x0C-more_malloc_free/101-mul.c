#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * number_checker - mutliplies two positive numbers
 * @argv: argument vector
 * Return: 1 for a number or 0
 */

int number_checker(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (!isdigit(argv[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - multiples two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	unsigned long mul;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!number_checker(argv[1]) || !number_checker(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
