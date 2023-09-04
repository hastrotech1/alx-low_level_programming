#include "main.h"

/**
 * _puts - this function prints a string followed by a new line
 *
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
		_putchar(str[l]);
	_putchar('\n');
}
