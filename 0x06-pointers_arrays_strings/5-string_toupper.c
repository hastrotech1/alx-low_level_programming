#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @n: Charater poninter
 *
 * Return: gives n as output.
 */

char *string_toupper(char *n)
{
	int g = 0;

	while (n[g] != '\0')
	{
		if (n[g] >= 'a' && n[g] <= 'z')
			n[g] = n[g] - 32;
		g++;
	}
	return (n);
}
