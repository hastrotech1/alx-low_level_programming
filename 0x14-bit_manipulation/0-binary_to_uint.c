#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to string of binary number.
 *
 * Return: the converted number, or 0 if:
 * - there is one or more chars in the string b that is not 0 or 1.
 * - b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int index, p;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}

	p = 1;

	for (index = index - 1; index >= 0; index--)
	{
		value += (b[index] - '0') * p;
		p *= 2;
	}

	return (value);
}
