#include <stdio.h>
/**
 * numLength - check length
 * @n: number
 * Return: length
 */

int numLength(int n)
{
	int length = 0;

	if (!n)
	{
		return (1);
	}

	while (n)
	{
		n = n / 10;
		length += 1;
	}

	return (length);
}

/**
 *  *main - prints the first 98 fibonaci sequences
 *  Return: 0 always
 */

int main(void)
{
	unsigned long f1 = 1;
	unsigned long f2 = 2;
	unsigned long tmp;
	unsigned long x = 100000000;
	unsigned long i1 = 0;
	unsigned long i2 = 0;
	unsigned long j = 0;
	short int a = 1,
	short int init;

	while (a <= 98)
	{
		if (i1 > 0)
			printf("%lu", i1);
		init = numLength(x) - 1 - numLength(f1);
		while (i1 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % x;
		j = i1 + i1 + (f1 + f2) / x;
		f1 = f2;
		i1 = i2;
		f2 = tmp;
		i2 = j;

		if (a != 98)
			printf(", ");
		else
			printf("\n");
		a++;
	}
	return (0);
}
