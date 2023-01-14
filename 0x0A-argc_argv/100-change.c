#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, or 1
 */

int main(int argc, char *argv[])
{
	int num, count, i;
	int coins[] = {25, 10, 5, 2, 1};

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);
	return (0);
}
