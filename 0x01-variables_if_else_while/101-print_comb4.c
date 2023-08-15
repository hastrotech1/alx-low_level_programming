#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int wow;
	int ten;
	int jon;

	for (jon = '0'; jon <= '9'; jon++)
	{
		for (ten = (jon + 1); ten <= '9'; ten++)
		{
			for (wow = (ten + 1); wow <= '9'; wow++)
			{
				putchar(jon);
				putchar(ten);
				putchar(wow);
				if (jon != '7' || ten != '8' || wow != '9')
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
