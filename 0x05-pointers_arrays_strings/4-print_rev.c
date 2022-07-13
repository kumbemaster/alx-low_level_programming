#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: - char input to reverse
 * Return: string in reverse
 */

void print_rev(char *s)
{0
	char rvs = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		count--;
		rvs = s[i];
		s[i] = s[count]
		s[count] = rvs;
	}

}
