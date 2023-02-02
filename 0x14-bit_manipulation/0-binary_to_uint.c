#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len, weight = 1;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len + 1])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	while (len >= 0)
	{
		decimal += (b[len] - 48) * weight;
		weight *= 2;
		len--;
	}
	return (decimal);
}
