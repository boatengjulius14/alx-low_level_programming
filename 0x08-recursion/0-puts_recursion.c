#include "main.h"

/**
 *_puts_recursion - prints a string, followed by a newline
 *@s: string to be printed
 */

void _puts_recursion(char *s)
{
	if(!*s) return;
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}