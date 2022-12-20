#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string
 */

void print_rev(char *s)
{
	int sum = 0;

	while (s[sum] != '\0')
	{
		sum++;
	}

	for (sum ; sum >= 0; sum--)
	{
		_putchar(s[sum]);
	}
	_putchar('\n');
}
