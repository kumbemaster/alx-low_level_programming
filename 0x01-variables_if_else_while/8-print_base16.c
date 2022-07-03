#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char lowercase;

	for (a = '0'; a <= '9'; a++)

		putchar(a);
	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
		putchar(lowercase);

	putchar('\n');

	return (0);
}
