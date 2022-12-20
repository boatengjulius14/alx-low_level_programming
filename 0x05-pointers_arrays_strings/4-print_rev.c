#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, plus new line.
 * @s: string
 */

void print_rev(char *s)
{
	int sum = 0, i;

	while (s[sum] != '\0')
	{
		sum++;
	}
	for (i = sum - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
