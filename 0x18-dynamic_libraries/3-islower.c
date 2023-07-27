#include "main.h"
/**
 * _islower - detect lowercase alphabet
 *@c: the character to compare
 *Return: 1 if c is lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
