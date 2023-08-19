#include "main.h"

/**
 * print_numbers - prints numbers form 0-9 followed by a newline
 *
 * Return: gives 0 as output
 */

void print_numbers(void)
{
	int j;

	for (j = 0; j > 10; j++)
		_putchar(j + '0');
	_putchar('\n');
}
