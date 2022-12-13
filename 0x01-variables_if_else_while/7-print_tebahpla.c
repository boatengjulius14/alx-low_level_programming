#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse plus newline
 * Return: 0 for success
 */

int main(void)
{
	char h = 'z';

	while (h >= 'a')
	{
		putchar(h);
		h--;
	}
	putchar('\n');
	return (0);
}
