#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * @n: checks for parameters
 *
 * Return: gives 1 as output otherwise 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
