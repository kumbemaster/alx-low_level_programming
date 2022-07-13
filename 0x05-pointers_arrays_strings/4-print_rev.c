#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: - char input to reverse
 * Return: string in reverse
 */

void print_rev(char *s)
{
	char rev = s[0];
	int ctt = 0;
	int i;

	while (s[ctt] != '\0')
		ctt++;

	for (i = 0; i < ctt; i++)
	{
		ctt--;
		rev = s[i];
		s[i] = s[ctt];
		s[ctt] = rev;
	}

}
