#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct var - structure to link string characters and function pointer
 * @c: pointer to string
 * @fptr: function pointer
 */
typedef struct var
{
	char *c;
	void (*fptr)(va_list op);
} opstruc;
#endif
