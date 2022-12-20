#include "main.h"
#include <stdio.h>

/**
 *rev_string - reverses a string.
 *@s: string
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int x = len - 1;

	for (x; x >= 0; x--)
	{
		_putchar(s[x]);
	}
}
