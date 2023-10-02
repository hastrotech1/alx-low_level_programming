#include "main.h"

/**
 * get_bit - This function returns the value of a bit
 *
 * @n: The search number
 *
 * @index: The bit index
 *
 * Return: Gives the value of the bit as output
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
