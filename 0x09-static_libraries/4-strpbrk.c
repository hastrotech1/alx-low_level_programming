#include "main.h"

/**
 * _strspn - This function gets the lenght prefix of a substring
 *
 * @s: The pointer string
 *
 * @accept: Parameter to be checked
 *
 * Return: gives 0 as output
 */

unsigned int _strspn(char *s, char *accept)
{
	int e, y;

	for (e = 0; s[e] != '\0'; e++)
	{
		for (y = 0; s[e] != accept[y]; y++)
		{
			if (accept[y] == '\0')
				return (e);
		}
	}
	return (0);
}
