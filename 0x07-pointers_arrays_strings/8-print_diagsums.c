#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - a function that prints the sum of the two diagonals
 *of a square matrix of integers.
 *@a: pointer to square matrix
 *@size: size of square matrix
 */

void print_diagsums(int *a, int size)
{
	int x, i, mul, sum = 0, sum1 = 0;

	/*top left to bottom right*/
	x = size + 1;
	for (i = 0 ; i < size ; i++)
	{
		mul = x * i;
		sum += a[mul];
	}
	/*top right to bottom left*/
	x = size - 1;
	for (i = 1; i <= size ; i++)
	{
		mul = x * i;
		sum1 += a[mul];
	}
	printf("%d, %d\n", sum, sum1);
}
