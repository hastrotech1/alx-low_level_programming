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
		for (t = '0'; t <= '9'; t++)
		{
			if (!((o == t) || (t > o)))
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
	}
	putchar('\n');
	return (0);
}
