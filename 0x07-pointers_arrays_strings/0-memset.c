#include "main.h"


/**
 * _memset - function that fills memroy with constant byte
 * @s: memory are
 * @b: constant byte
 * @n: bytes of the memory
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
