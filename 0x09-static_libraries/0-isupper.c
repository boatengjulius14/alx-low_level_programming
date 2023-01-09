#include "main.h"

/**
 * _isupper -checks of uppercase characters
 * @c: character to be checked
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
