#include "main.h"


/**
 * _strspn - function that gets the lenght of prefix substring
 * @s: string
 * @accept: bytes
 * Return:number of bytes in the initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x, v, chq;

	v = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		chq = 0;

		for (x = 0; accept[x] != '\0'; n++)
		{
			if (accept[x] == s[i])
			{
				v++;
				chq = 1;
			}
		}
		if (chq == 0)
			return (v);
	}


	return (v);
}
