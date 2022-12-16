#include"main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size the size of the triangle
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{

		for (a = 1; a <= size; a++)
		{
			for (c = 0; c < a; c++)
			{
				_putchar('#');
			}
			for (b = size - a ; b > 0; b--)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
