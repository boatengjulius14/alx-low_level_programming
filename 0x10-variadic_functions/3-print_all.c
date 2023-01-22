#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * _char - prints char arguments
 * @op: argument pointer
 */
void _char(va_list op)
{
	printf("%c", va_arg(op, int));
}

/**
 * _int - prints int arguments
 * @op: argument pointer
 */
void _int(va_list op)
{
	printf("%d", va_arg(op, int));
}

/**
 * _float - prints float parameters
 * @op: argument pointer
 */
void _float(va_list op)
{
	printf("%f", va_arg(op, double));
}

/**
 * _str - prints str parameters
 * @op: argument pointer
 */
void _str(va_list op)
{
	char *nstr = va_arg(op, char*);

	if (nstr)
		printf("%s", nstr);
	else
		printf("(nil)");
}

/**
 * print_all - prints anything
 * @format: pointer to list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, j, _switch = 0;
	va_list op;

	opstruc _func[] = {
		{"c", &_char},
		{"i", &_int},
		{"f", &_float},
		{"s", &_str},
	};

	va_start(op, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(_func[j].c))
			{
				if (_switch == 1)
					printf(", ");
				_func[j].fptr(op);
				_switch = 1;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(op);
}
