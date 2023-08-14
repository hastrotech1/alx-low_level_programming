#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints possible combinations
 *
 * Return: gives 0 as output
 */

int main(void)
{
	int t = '0';
	int o = '0';

	for (o = '0'; o <= '9'; o++)
	{
		for (t = (o + 1); t < 10; t++)
		{
				putchar(t);
				putchar(o);
				if (!(o == '9' && t == '8'))
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
