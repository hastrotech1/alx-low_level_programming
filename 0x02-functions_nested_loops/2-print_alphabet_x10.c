#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: gives 0 as output
 */

void print_alphabet_x10(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a * 10);
	_putchar('\n');
}
