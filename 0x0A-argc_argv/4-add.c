#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if a number isn't input. O for success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
		printf("0\n");
	i = 0;
	while (i < argc)
	{
		if (atoi(argv[i]) >= 48 && atoi(argv[i]) <= 57)
			sum += atoi(argv[i]);
		else if (atoi(argv[i]) <= 48 && atoi(argv[i]) >= 57)
		{
			printf("Error");
			return (1);
		}
		i++;
	}
	printf("%d", sum);
	return (0);
}

