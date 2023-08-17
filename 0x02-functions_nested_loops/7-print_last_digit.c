#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @j: checks for parameters
 *
 * Return: gives 0 as output
 */

int print_last_digit(int j)
{
	int k;
	k = j;

	if (j < 0)
	{
		j = k % 10;
		k = -k;
	}
	_putchar(k + '0');
	return (0);
}
