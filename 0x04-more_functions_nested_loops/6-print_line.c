#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: this is the function parameter
 *
 * Return: gives 0 as output
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int o;
		
		for (o = 1; o <= n; o++)
			_putchar('_');
		_putchar('\n');
	}
}
