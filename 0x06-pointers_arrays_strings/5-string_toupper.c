#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 * @n: the character containing string
 * Return:  the uppercase character
 */

char *string_toupper(char *n)
{

	int i = 0;

	while (n[i])

	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] = n[i] - 32;
		i++;
	}

		return (n);

}
