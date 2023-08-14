#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphaBETS
 *
 * Return: gives 0 as output
 */

int main(void)
{
	char s;
	char C;

	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
