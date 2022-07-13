#include "main.h"

/**
 * _strlen - function that returns the lenght of a string
 * @s: char input
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char qs = s[0];

	while (qs != '\0')
	{
		sum++;
		qs = s[i++];
	}

	return (sum);

}
