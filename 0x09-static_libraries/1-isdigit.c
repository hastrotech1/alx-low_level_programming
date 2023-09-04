#include "main.h"

/**
 * _isdigit - checks for digits
 *
 * @c: checks for parameter
 *
 * Return: gives 1 or c as output and 0 as error
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
