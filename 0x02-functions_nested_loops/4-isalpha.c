#include "main.h"

/**
 * _islower - checks for alphabetic character whether lowercase or uppercase
 *@c: single letter input
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);

	else
		return (0);

}
