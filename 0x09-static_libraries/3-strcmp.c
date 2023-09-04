#include "main.h"

/**
 * _strcmp - Function compares two strings.
 *
 * @s1: A pointer to the first string.
 *
 * @s2: A pointer to the second string.
 *
 * Return: gives 0 as output
 */

int _strcmp(char *s1, char *s2)
{
	int g;

	for (g = 0; s1[g] != '\0' || s2[g] != '\0'; g++)
	{
		if (s1[g] != s2[g])
		{
			if (s1[g] < s2[g])
				return (s1[g] - s2[g]);
			else if (s2[g] < s1[g])
				return (s1[g] - s2[g]);
		}
	}
	return (0);
}
