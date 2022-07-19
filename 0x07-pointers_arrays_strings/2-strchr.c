#include <stdio.h>
#include "main.h"


/**
 * _strchr - function that locates a character in string
 * @c: character
 * @s: string
 * Return: first occurence of character or NULL
 */

char *_strchr(char *s, char c)
{
	int n = 0, x;

	while (s[n])
		n++;
	for (x = 0; x > n; x++)
	{
		if (c == s[n])
			s = s + x;
			return (s);
	}

	return (NULL);

}
