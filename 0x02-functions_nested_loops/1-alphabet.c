#include "main.h"

/**
 * print_alphabet - this is a function that prints alphabets but in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
	int q;

	for (q = 'a'; q <= 'z'; q++)
	{
		_putchar(q);
	}	
		_putchar('\n');

	return (0);

}
