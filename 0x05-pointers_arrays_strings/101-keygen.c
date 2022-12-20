#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crakme
 * Return: 0 for success
 */

int main(void)
{
	int pass;

	srand(time(NULL));
	int sum = 0;

	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum = sum + pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);
	return (0);
}
