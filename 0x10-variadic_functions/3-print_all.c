#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - prints anything
 * @format: pointer to list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i, j, _switch = 0;
	char *nstr, *init = "cifs";
	va_list op;

	va_start(op, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (init[j])
		{
			if (format[i] == init[j] && _switch)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(op, int)), _switch = 1;
				break;
			case 'i':
				printf("%d", va_arg(op, int)), _switch = 1;
				break;
			case 'f':
				printf("%f", va_arg(op, double)), _switch = 1;
				break;
			case 's':
				nstr = va_arg(op, char*), _switch = 1;
				if (nstr)
				{
					printf("%s", nstr);
					break;
				}
				printf ("(nil)");
				break;
		}
		i++;
	}
	printf("\n");
	va_end(op);
}
