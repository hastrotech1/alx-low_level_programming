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
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar(h / 10 + '0');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
