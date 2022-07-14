#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * @dest: copy to char
 * @src: copy from char
 * @n: input of maximum byte to be used
 * Return:  pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, qq;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (qq = 0; qq < n; qq++)
	{
		dest[1 + qq] = src[qq];
		if (qq[0] == '\0')
			qq = n;
	}
	return (dest);
}

