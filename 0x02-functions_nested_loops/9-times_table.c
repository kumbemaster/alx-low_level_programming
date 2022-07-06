#include "main.h"

/**
 * times-table - this prints out the  times table
 * r, c, d - r =  row,c =  column, and d = digits of result
 * Return: always 0
 */

void times_table(void);
{
	int r, c, d;


	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (c = 0; c <= 9; c++)
		{
			d = (r * c);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
