#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: checks for parameter
 *
 * Return: gives 1 if c is a letter, lower or uppercase returns 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
