#include <stdio.h>

/**
 * print_to_98 - main function
 *
 * @n: Brgining of a number
 *
 * Return: gives 0 as output
*/


void print_to_98(int n)
{
	int g;

	if (n < 98)
	{
		for (g = n; g <= 98; g++)
		{
			printf("%d", g);
			if (g <= 97)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (g = n; g >= 98; g--)
		{
			printf("%d", g);
			if (g >= 99)
			{
				printf(", ");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
