#include "main.h"

/**
 * _isupper - function checks for uppercase character
 *
 * @c: checks for uppercase parameter
 *
 * Return: gives 1 if c is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
