#include "main.h"

/**
 * jack_bauer - prints every minuets of the function hour
 *
 * Return: gives 0 as output
 */

void jack_bauer(void)
{
	int hour = 0;
	int mint = 0;

	while (hour < 24)
	{
		while (mint < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (mint / 10));
			_putchar('0' + (mint % 10));
			_putchar('\n');
			mint++;
		}
		mint = 0;
		hour++;
	}
}
