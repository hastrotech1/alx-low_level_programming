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
	int o;

	if (n <= 0)
		_putchar('\n');
	else
	{
		
		for (o = 1; o <= n; o++)
			_putchar('_');
		_putchar('\n');
	}
}
