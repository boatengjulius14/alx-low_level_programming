#include "main.h"

/**
 * get_bit - returns the value of a bit at a given number
 * @n: decimal number
 * @index: index
 * Return: bit at a given index, or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		n >>= 1;
	if (i > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	return (n & 1);
}
