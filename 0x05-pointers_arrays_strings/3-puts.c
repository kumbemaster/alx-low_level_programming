#include "main.h"

/**
 * _puts - a function that  prints a string
 * @str: string input
 * Return: the string
 */

void _puts(char *str)
{
	int i;

	for (1 = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
