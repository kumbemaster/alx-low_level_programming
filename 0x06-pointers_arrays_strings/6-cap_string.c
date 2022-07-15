#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return:  string in capitalized form
 */

char *cap_string(char *n)
{
	int i, j;
	int c = 32;
	int sep[] = {' ', '\t', '\n', ',', ';', '.', '?', '"','(', ')', '{', '}'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		c = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == sep[j])
			{
				j = 12;
				c = 32;
			}
		}
	}
	return (n);

}
