#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase, q, e;

	q = 'q';
	e = 'e';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != q && lowercase != e)
			putchar(lowercase);

	}

	putchar('\n');

	return (0);
}
