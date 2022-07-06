#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{

	int q, pq;

	pq = 0;

	while (pq < 10)
	{

	for (q = 'a'; q <= 'z'; q++)
	{
		_putchar(q);
	}
		pq++;

		_putchar('\n');
	}
}
