#include "main.h"


/**
 * _memcpy - function that copies memory area
 * @dest:memory area copied from
 * @src: memory area copied to
 * @n: bytes of the memory
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}
