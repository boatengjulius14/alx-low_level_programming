#include "main.h"
/**
 * print_alphabet_x10 -print alphabet 10x plus new line
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 1;
	while (i < 11)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
