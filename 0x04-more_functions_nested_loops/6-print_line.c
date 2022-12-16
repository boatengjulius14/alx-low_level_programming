#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: input no. of times the character _ should be printed
 */

void print_line(int n)
{
	if (n > 0)
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
