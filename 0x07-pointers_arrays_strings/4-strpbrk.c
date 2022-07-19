#include "main.h"


/**
 * _strpbrk - function that searches string for any of a set of byte
 * @s: s string
 * @accept: accept string
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)

	{
		for (n = 0; accept[n] != '\0'; n++)

		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);

}
