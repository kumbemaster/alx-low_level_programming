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
	int i;

	for (i = 0; src[i] != '\0'; i++)

		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';

	return (dest);

}

