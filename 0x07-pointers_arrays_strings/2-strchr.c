#include <stdio.h>
#include "main.h"


/**
 * _strchr - function that locates a character in string
 * @c: character
 * @s: string
 * Return: first occurence of c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}

	return (NULL);

}
