#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - This function searches a string of any set of bytes
 *
 * @s: The function pointer
 *
 * @accept: The pointer to the sting
 *
 * Return: gives '\0' as output
 */

char *_strpbrk(char *s, char *accept)
{
	int van;

	while (*s)
	{
		for (van = 0; accept[van]; van++)
		{
			if (*s  == accept[van])
				return (s);
		}
		s++;
	}
	return (NULL);
}
