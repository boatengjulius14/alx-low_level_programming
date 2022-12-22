#include "main.h"

/**
* leet - encodes a string into 1337
*@str:string
*Return:pointer
*/

char *leet(char *str)
{
	char l[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	int i = 0;
	int j;

	while (str[++i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == l[j] ||
			 str[i] - 32 == l[j])
				str[i] = j + '0';
		}
	}
	return (str);
}
