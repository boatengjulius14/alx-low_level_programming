#include "main.h"

/**
 * get_bit - returns the value of a bit at a given number
 * @n: decimal number
 * @index: index
 * Return: bit at a given index, or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mod, i = 0;

	while (1)
	{
		mod = n % 2;
		n = n / 2;
		if (i == index)
			return (mod & 1);
		i++;
	}
	return (-1);
}
