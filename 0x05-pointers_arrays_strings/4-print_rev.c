#include "main.h"

/**
 * print_rev - function prints a string, in reverse, followed by a new line
 *
 * @s: the given parameter
 *
 * Return: void
 */

void print_rev(char *s)
{
	int h;
	int f;

	for (h = 0; s[h] != '\0'; h++)
		f++;
	for (h = f - 1; h >= 0; h--)
		_putchar(s[h]);
	_putchar('\n');
}
