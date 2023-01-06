#include "main.h"

/**
 *sqroot - calculates the square roots of natural numbers > 1
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number > 1 whose sqrt root is being calculated
 *@b: number being compared to n
 *Return: b, the sqaure root of a number > 1. Or -1 if none is found
 */

int sqroot(int n, int b)
{
	if (b * b  == n)
		return (b);
	if (b * b < n)
		return (sqroot(n, b + 1));
	return (-1);
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number whose square root is being calculated
 *Return: return n if number is 0 or 1 else b
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (sqroot(n, 2));
}
