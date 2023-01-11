#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	(void)argv;

	for (i = 1 ; i < argc ; i++)
		sum++;
	printf("%d\n", sum);
	return (0);
}
