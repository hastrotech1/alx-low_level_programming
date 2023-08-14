#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers in as
 *
 * Return: gives 0 as output
 */

int main(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		if (p == 9)
			putchar(p + '0');
		else
		{
			putchar(p + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
