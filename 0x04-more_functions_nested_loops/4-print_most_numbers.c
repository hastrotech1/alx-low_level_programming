#include "main.h"

/**
* print_most_numbers - prints the numbers from 0-9
 *
 * Return: gives 0 as output
 */

void print_most_numbers(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		if (p != 2 && p != 4)
			_putchar(p + '0');
	}
	_putchar('\n');
}
