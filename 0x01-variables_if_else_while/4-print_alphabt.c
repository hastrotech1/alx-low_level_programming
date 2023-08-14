#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all alphabets except q & e
 *
 * Return: gives 0 as output
 */

int main(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	if (r != 'e' && r != 'q')
		putchar(r);
	putchar('\n');
	return (0);
}
