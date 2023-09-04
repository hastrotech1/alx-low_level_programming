#include "main.h"

/**
 * _memset - This function fills the memory with a constant byte.
 *
 * @s: The pointer
 *
 * @b: The integer
 *
 * @n: The maximum number of bytes stored
 *
 * Return: gives s as output
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
		s[v] = b;
	return (s);
}
