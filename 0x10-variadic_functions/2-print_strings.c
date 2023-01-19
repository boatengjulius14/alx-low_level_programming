#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: sting passed to the function
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list op;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(op, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
