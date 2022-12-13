#include <stdio.h>
/**
* main - print all numbers of base 16 in lowercase plus newline
* Return: 0 for success
*/
int main(void)
{
	int r = '0';

	while (r <= '9')
	{
		putchar(r);
		r++;
	}
	r = 'a';
	while (r <= 'f')
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);

}
