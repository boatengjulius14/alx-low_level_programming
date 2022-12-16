#include "main.h"

/**
 * print_square - prints a square, followed by a a new line
 * @size: size of the square
 */

void print_square(int size)
{
	if (size > 0)
	{
		int a;

		for (a = 0; a < size; a++)
		{
			int b;

			for (b = 0; b < size ; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
}
