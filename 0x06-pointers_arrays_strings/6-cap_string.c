#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: pointer
 */


char *cap_string(char *s)
{
	int num = 0, i;
	int sym[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + num) <= 122 && *(s + num) >= 97)
		*(s + num) = *(s + num) - 32;
	num++;
	while (*(s + num) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + num) == sym[i])
			{
				if ((*(s + (num + 1)) <= 122) && (*(s + (num + 1)) >= 97))
					*(s + (num + 1)) = *(s + (num + 1)) - 32;
				break;
			}
		}
		num++;
	}
	return (s);
}
