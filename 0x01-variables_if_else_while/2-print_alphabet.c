#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putcher(lowercase);
		putcher("\n");
	
	return (0);

}
