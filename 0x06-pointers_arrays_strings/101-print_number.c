#include "main.h"

/**
  *print_number - prints an integer
  *@n: The integer
  */

void print_number(int n)
{
	unsigned int num, i, j;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}
	j = i;
	num = 1;
	while (j > 9)
	{
		j /= 10;
		num *= 10;
	}
	for (; num >= 1; num /= 10)
	{
		_putchar(((i / num) % 10) + 48);
	}
}
