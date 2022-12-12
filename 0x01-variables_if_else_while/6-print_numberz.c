#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all single digits no. of base 10 from 0, plus newline
 * Return: 0 for success
 */
int main(void)

{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);

}
