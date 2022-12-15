#include "main.h"
/**
 * print_alphabet - print all alphabets in lowercase plus newline
 * Return: 0 always
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
