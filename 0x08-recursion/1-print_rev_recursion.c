#include "main.h"

/**
 * _print_rev_recursion - This function prints reverse string
 *
 * @s: The string printed in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
