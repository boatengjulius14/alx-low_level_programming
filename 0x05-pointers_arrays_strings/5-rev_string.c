#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string
 */

void rev_string(char *s)
{
	int a, sum = 0;

	while (sum >= 0)
	{
		if (s[sum] == '\0')
			break;
		sum++;
	}
	for (a = 0; a < (sum - 1); a++)
	{
		int b, c;

		for (b = a + 1; b > 0; b--)
		{
			c = *(s + b);
			*(s + b) = *(s + (b - 1));
			*(s + (b - 1)) = c;
		}
	}
}
