#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Unsigned long integer number
 * @index: Given index number
 *
 * Return: Value of the bit at index, or (-1) if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
