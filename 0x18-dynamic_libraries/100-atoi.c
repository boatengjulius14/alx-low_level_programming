#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: n
 */

int _atoi(char *s)
{
	int a = 0, d = 0, n = 0, x = 0, f = 0, num = 0;

	while (s[x] != '\0')
		x++;

	while (a < x && f == 0)
	{
		if (s[a] == '-')
			++d;

		if (s[a] <= '9' && s[a] >= '0')
		{
			num = s[a] - '0';
			if (d % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[a + 1] > '9' || s[a + 1] < '0')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);

	return (n);
}
