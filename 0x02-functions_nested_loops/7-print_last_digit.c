#include "main.h"

/**
 * print_last_digit - this is a function that prints the last digit of a number
 *@n: this is the number to print its last digit
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{

	int q;
	q = n % 10;

	if (q < 0)
	{
		q *= -1;
		_putchar(q + '0');
	}
		return (q);


}
