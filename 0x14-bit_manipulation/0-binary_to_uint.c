#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string of binary number.
 *
 * Return: the converted number, or 0 if:
 * - there is one or more chars in the string b that is not 0 or 1.
 * - b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;
	int bin_idx, power;

	if (b == NULL)
		return (0);

	for (bin_idx = 0; b[bin_idx] != '\0'; bin_idx++)
	{
		if (b[bin_idx] != '0' && b[bin_idx] != '1')
			return (0);
	}

	power = 1;

	for (bin_idx = bin_idx - 1; bin_idx >= 0; bin_idx--)
	{
		decimal_val += (b[bin_idx] - '0') * power;
		power *= 2;
	}

	return (decimal_val);
}

