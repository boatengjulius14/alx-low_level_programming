#include"main.h"

/**
 * print_triangle - prints a triangle
 * @size: input size of the triangle
 * Return: 0 always
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= sa e; ++a)
		{
			for (b = 1; b <= size; ++b)
			{
				if ((a + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
