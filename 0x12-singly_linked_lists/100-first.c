#include "lists.h"
/**
 * _print - prints before the main function is executed
 */
void _print(void) __attribute__ ((constructor));
void _print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
