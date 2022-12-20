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

	while (sum >= 0)
	{
		_putchar(s[sum]);
		sum--;
	}
	_putchar('\n');
}
