#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number to converted
 */

void print_binary(unsigned long int n)
{
	unsigned long long int weight = 1, saveweight = 0;
	unsigned long int i;

	while (n)
	{
		for (i = 0; (1 << (i + 1)) <= n; i++)
			weight = weight * 10;

		n = n - (1 << i);
		saveweight = saveweight + weight;
		weight = 1;
	}
	printf("%lld", saveweight);
}
