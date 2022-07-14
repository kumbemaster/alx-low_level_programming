#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: copy to char
 * @src: copy from char
 * @n: number input
 * Return:  Always 0
 */
char *_strncpy(char *dest, char *src, int n)
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

