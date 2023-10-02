#include "main.h"

/**
 * print_binary - This function Prints the binary rep number
 *
 * @n: The number of binary to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int equ;
	int loop, c;

	c = 0;
	loop = 63;

	while (loop >= 0)
	{
		equ = n >> loop;

		if (equ & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
		{
			_putchar('0');
		}
		loop--;
	}
	if (!c)
	{
		_putchar('0');
	}
}
