#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the input
 *
 * Return: gives 0 as output
 */

int main(void)
{
	int q;
	char u;

	for (q = 0; q < 10; q++)
		putchar(q + '0');
	for (u = 'a'; u <= 'f'; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
