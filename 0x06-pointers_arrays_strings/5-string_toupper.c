#include "main.h"

/**
*string_toupper - function that changes all lowercase string to uppercase
*@str: string
*Return: pointer to string in uppercase
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
}
