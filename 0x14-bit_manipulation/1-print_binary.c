#include "main.h"

/**
* print_binary - this function converts an unsigned int to binary.
* @n: unsinged integer to be converted to binary.
* Return: void.
*/

void print_binary(unsigned long int n)
{
	unsigned long int j;

	bool num = false;

	for (j = 1UL << (sizeof(unsigned long int) * 8 - 1); j; j >>= 1)
	{
		if (n & j)
		{
			num = true;

			_putchar('1');
		}
		else if (num)
		{
			_putchar('0');
		}
	}

	if (num != true)
	{
		_putchar('0');
	}
}
