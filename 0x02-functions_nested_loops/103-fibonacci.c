#include <stdio.h>
/**
 * main - entry point
 * Return: 0 always
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = i + j;
		i = j;
		j = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%d\n", sum);
	return (0);
}
