#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need
 *	to flip to get from one number to another
 * @n: First integer number
 * @m: Second integer number
 *
 * Return: Number of bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_flip = 0, checker_1, checker_2;

	while (!(n == 0 && m == 0))
	{
		checker_1 = n & 1;
		checker_2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (checker_1 != checker_2)
		{
			num_flip += 1;
		}
	}
	return (num_flip);
}
