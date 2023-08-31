#include "main.h"

/**
 * factorial - This function return factorial of a given number
 *
 * @n: The number given
 *
 * Return: Gives 0 as output
 */

int factorial(int n)
{
	if (n < 0)
		return (1);
	return (n * factorial(n - 1));
}
