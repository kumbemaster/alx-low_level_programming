#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
	{
		putchar(lowercase);
	}

	putchar('\n');

	return (0);
}
