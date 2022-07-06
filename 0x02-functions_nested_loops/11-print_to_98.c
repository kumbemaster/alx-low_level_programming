#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_to_98 - this is a function that prints all natural numbers from n to 98
 *@n: integer input
 *Return: Always 0 (Success)
 *
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n++;

		}
	}

	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf("%d", n);
			}
			n--;
		}
	}

	else
	{
		printf("98");
	}

	printf("\n");
}
