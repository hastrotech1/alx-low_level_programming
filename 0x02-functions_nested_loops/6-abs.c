#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @a: checks for parameter
 *
 * Return: gives -a or a as output;
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
