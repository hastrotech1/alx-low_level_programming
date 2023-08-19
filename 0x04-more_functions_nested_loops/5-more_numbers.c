#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: gives 0 as output
 */

void more_numbers(void)
{
	int h;
	int y;

	for (h = 0; h < 10; h++)
	{
		for (h = 0; h <= 14; y++)
		{
			if (y > 9)
				_putchar(j % 10 + '0');
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
