#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: THe int to be checked
 * Return: an absolute value
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}

	else
	{
		i *= -1;
		return (i);
	}
}
