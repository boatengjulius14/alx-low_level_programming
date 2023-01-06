#include "main.h"

/**
 *_compare - checks if a string is a palinddrome
 *@s: string
 *@b: integer
 *@len: strlen - 1
 *Return: 1 is a string is panlindrome, 0 if otherwise
 */
int _compare(char *s, int b, int len)
{
	if (s[b] != s[len])
		return (0);
	if (b < len && s[b] == s[len])
		return (_compare(s, len - 1, b + 1));
	return (1);
}

/**
 *_strlen - calculates the length of a string
 *@s: string
 *Return: string length
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 *is_palindrome - checks if a string is a palindrome
 *@s: string
 *Return: 1 is s is a palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (_compare(s, 0, length - 1));
}
