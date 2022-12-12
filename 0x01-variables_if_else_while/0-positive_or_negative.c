#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Starting function
  *Return: 0 for success
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*For your entered code*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
