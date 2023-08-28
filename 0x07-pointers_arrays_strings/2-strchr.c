#include "main.h"

/**
 * _strchr - This function locates the string
 *
 * @s: The pointer string
 *
 * @c: The string pointed to
 *
 * Return: gives c in the string s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
