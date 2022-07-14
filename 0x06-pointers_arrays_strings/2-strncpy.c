#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string
 * @dest: copy to char
 * @src: copy from char
 * @n: number input
 * Return:  Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);

	return (dest);

}
