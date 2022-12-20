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
	for (int i = sum - 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
