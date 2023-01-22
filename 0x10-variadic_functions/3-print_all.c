#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - prints anything
 * @format: pointer to list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, _switch;
	char *str;
	va_list op;

	va_start(op, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(op, int));
				_switch = 0;
				break;
			case 'i':
				printf("%i", va_arg(op, int));
				_switch = 0;
				break;
			case 'f':
				printf("%f", va_arg(op, double));
				_switch = 0;
				break;
			case 's':
				str = va_arg(op, char*);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				_switch = 0;
				break;
			default:
				_switch = 1;
				break;
		}
		if (format[i + 1] && !_switch)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(op);
}
