#include <stdio.h>

/**
 *main - print 1-100 and replace multiples of 3, 5 and both 3 and 5 with Fizz,
 *Buzz, and FizzBuzz respectively
 *Return: 0 always
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (a % 5 == 0 && a % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");

	return (0);
}
