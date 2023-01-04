#include "main.h"

/**
 *_strstr - function that locates a substring
 *@haystack: pointer to string 1
 *@needle: pointer to string 2
 *Return: oldhay, matching substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *oldhay = haystack;
	char *oldnee = needle;

	while (*haystack)
	{
		needle = oldnee;
		haystack = oldhay;

		while (*needle)
		{
			if (*haystack == *needle)
			{
				haystack++;
				needle++;
			}
			else
				break;
		}
		if (!*needle)
			return (oldhay);
		oldhay++;
	}
	return (0);
}
