#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: this is the function parameter
 *
 * Return: If n is 0 or less, the function should only print \n 
 */

void print_line(int n)
{
	int p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= n; p++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
