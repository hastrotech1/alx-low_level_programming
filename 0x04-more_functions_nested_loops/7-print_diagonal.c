#include "main.h"

/**
 * print_diagonal - function prints line diagonally on the terminal
 *
 * @n: the given parameter
 *
 * Return: no return value
 */

void print_diagonal(int n)
{
	int f, g;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (f = 0; f < n; f++)
		{
			for (g = 0; g < n; g++)
			{
				if (f == g)
				{
					_putchar('\\');
				}
				else if (g < f)
					_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
