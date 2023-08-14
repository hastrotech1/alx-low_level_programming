#include <stdio.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabet
 *
 * Return: gives 0 as output
 */

int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
		putchar(k);
	putchar('\n');
	return (0);
}
