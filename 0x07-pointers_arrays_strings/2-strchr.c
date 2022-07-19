#include <stdio.h>
#include "main.h"


/**
 * _strchr - function that locates a character in string
 * @c: character
 * @s: character string
 * Return: first occurence of character or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}

	return (s);
}
