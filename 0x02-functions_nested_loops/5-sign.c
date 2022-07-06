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
		return (1);	
		_putchar('o');
	}
	else if (n == 0)
	{	
		return (0);
		_putchar('r');
	}
	
	else
	{
		return (-1);
		_putchar('q');
	}
	_putchar('\n');
}
