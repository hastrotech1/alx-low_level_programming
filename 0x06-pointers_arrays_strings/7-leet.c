#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @p: The function pointer
 *
 * Return: gives p as output
 */

char *leet(char *p)
{
	int y, k;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (y = 0; p[y] != '\0'; y++)
	{
		for (k = 0; k < 10; k++)
		{
			if (p[y] == c1[k])
				p[y] = c2[k];
		}
	}
	return (p);
}
