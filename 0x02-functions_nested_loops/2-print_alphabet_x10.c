#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: gives 0 as output
 */

void print_alphabet_x10(void)
{
	int k;
	char a;

	for (k = 0; k <= 9; k++)
	{
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
	}
}
