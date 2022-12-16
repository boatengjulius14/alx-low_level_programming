#include "main.h"

/**
 *more_numbers - prints 10 times the numbers from 0 to 14 plus new line
 */

void more_numbers(void)
{
	int a, b;

	a = 0;

	while (a < 10)
	{
		for (b = 0 ; b < 15 ; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
		a++;
	}
}
