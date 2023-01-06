#include "main.h"

/**
 *prime - for numbers > 2, it detects a prime number
 *@n: number being analyzed
 *@b: n - 1
 *Return: 1 if n is a prime number, 0 if otherwise
 */

int prime(int n, int b)
{
	if (b < 2)
		return (1);
	if (n % b == 0 && b > 1)
		return (0);
	return (prime(n, b - 1));
}

/**
 *is_prime_number - detects prime numbers
 *@n: number being analyzed
 *Return: 0, if number is less than 2, 1 if number is 2
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (prime(n, n - 1));
}
