#include <stdio.h>

/**
 * main - prints the lowercased alphabets except q and e, plus newline
 * Return: 0 for success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
