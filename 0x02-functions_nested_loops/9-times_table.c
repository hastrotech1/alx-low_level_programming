#include "main.h"

/**
 * times_table - print a function 9 times
 *
 * Return: gives 0 as output
 */

void times_table(void)
{
	int jack, jail, mult;

	for (jail = 0; jail < 10; jail++)
	{
		for (jack = 0; jack < 10; jack++)
		{
			mult = jack * jail;
			if (jack == 0)
			{
				_putchar(mult + '0');
			}
			else if (mult >= 10)
			{
				_putchar(' ');
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			if (jack != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
