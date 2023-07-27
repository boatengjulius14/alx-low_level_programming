#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: character to be compared
 * Return: 1 if its a lowercase or uppercase, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
