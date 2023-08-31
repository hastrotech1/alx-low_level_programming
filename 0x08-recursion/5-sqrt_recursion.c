#include "main.h"

int squareRoot(int num1, int val);

/**
 * _sqrt_recursion - This function returns natural squre root
 *
 * @n: The number of square root
 *
 * Return: gives 0 as output
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareRoot(n, 0));
}

/**
 * squareRoot - Find the square root
 *
 * @num1: The number to the square root
 *
 * @val: The iterating number
 *
 * Return:  Gives the square root  as output
 */

int squareRoot(int num1, int val)
{
	if (val * val > num1)
		return (-1);
	if (val * val == num1)
		return (val);
	return (squareRoot(num1, val + 1));
}
