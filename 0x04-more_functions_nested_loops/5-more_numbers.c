#include <stdio.h>

/**
 *more_numbers - prints 10 times the no. from 0 to 14 plus new line
 */

void more_numbers(void)
{
	for (int i = 0; i < 15; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
