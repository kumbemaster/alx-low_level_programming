#include "main.h"

/**
 * swap_int - a function that takes swaps the value of two integers
 * @a: first input
 * @b: second input
 * Return - integers
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;

}
