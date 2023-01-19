#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters after first argument
 * Return: sum, the sum of its parameers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(op, n);

	for (i = 0; i < n; i++)
		sum += va_arg(op, int);

	va_end(op);
	return (sum);
}
