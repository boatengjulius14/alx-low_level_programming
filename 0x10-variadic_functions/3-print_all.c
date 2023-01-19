#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _strlen - returns the length of a string
 * @format: string to be printed
 * Return: length of string
 */
int _strlen(const char * const format)
{
	int len = 0;

	while (format[len])
		len++;
	return (len);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, j, len;
	char *s;
	char arr[5] = {'c', 'i', 'f', 's'};
	va_list op;

	va_start(op, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(op, int));
				break;
			case 'i':
				printf("%d", va_arg(op, int));
				break;
			case 'f':
				printf("%f", va_arg(op, double));
				break;
			case 's':
				s = va_arg(op, char*);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				i++;
				continue;
		}
		len = _strlen(format);
		j = 0;
		while (j < 4)
		{
			if (format[i] == arr[j] && i != len - 1)
				printf(", ");
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(op);
}
