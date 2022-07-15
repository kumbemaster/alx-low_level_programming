#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return:  string in capitalized form
 */

char *cap_string(char *n)
{

	int x = 0, i;
	int l = 13;
	char spec[] = {' ', '\n', '\t', ',', ';', '.', '?', '"', '(', ')', '{', '}'};

	while (n[x])

	{
		i = 0;
		while (i < l)
		{
		if ((x = 0 || n[x - 1] == spec[i]) && n[x] >= 97 && n[x] <= 122)
			n[x] = n[x] - 32;
			i++;
		}
		x++;
	}

		return (n);

}
