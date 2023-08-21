#include "main.h"

/**
 * puts_half - prints half of the given string
 *
 * @str: the given parameter
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a, b, c = 0;

	for (a = 0; str[a] != '\0'; a++)
		c++;
	b =  (c - 1) / 2;
	for (a = b + 1; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
