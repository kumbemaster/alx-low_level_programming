#include "main.h"


/**
 * rot13 - a function that encodes a string using rot13
 * @z: input
 * Return: Always 0 (Success)
 */

char *rot13(char *z)
{

	int x, rot_c = 13, i = 0;
	char toswap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P',
		'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f',
		's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v',
		'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M',
		'Z', 'm', 'z'};


	while (z[i] != '\0')

	{
		for (x = 0; x <= 51; x++)
		{

			if (z[i] == toswap[x])

			{
				z[i] = z[i] + rot_c;

				x = 51;
			}
			rot_c = rot_c * -1;
		}

		i++;
	}

	return (z);
}
