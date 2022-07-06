#include "main.h"

/**
 * print_sign - this function prints the sign of a number negative or positive
 *@n: this has to be an integer
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{


	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{	
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
