#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints possible combinations
 *
 * Return: gives 0 as output
 */

int main(void)
{
	int o;
	int t;

	for (o = 0; o < 10; o++)
	{
		for (t = (o + 1); t < 10; t++)
		{
			putchar(o + '0');
			putchar(t + '0');
			if (o != 8 || t != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
