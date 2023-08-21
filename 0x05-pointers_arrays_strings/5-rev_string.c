#include "main.h"

/**
 * rev_string - writes a function which revers
 *
 * @s: the given parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	int j;
	int q = 0;

	for (j = 0; s[j] != '\0'; j++)
		q++;
	for (j = 0; j < q / 2; j++)
	{
		char v;

		v = s[j];
		s[j] = s[q - 1 - j];
		s[q - 1 - j] = v;
	}
}
