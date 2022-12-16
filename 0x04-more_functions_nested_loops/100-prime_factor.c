#include <stdio.h>

/**
 * main - print the largest prime factor of 612852475143
 * Return: 0 always
 */

int main(void)
{
	unsigned long n = 612852475143, p = 2;

	while (p < n)
	{
		if (n % p == 0)
		{
			n /= p;
			p = 2;
		}
		else
			p++;
	}
	printf("%lu\n", n);

	return (0);
}
