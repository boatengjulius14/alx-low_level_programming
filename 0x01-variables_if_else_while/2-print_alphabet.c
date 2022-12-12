#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowercase, followed by newline
 * Return: 0 for Success
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
