#include "3-calc.h"

/**
 * op_div - Fubction divides two numbers.
 *
 * @a: The first number.
 *
 * @b: The second number.
 *
 * Return: Gives the quotient of a and b as output.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_sub - Function gives the difference of two numbers.
 *
 * @a: The first number.
 *
 * @b: The second number.
 *
 * Return: Gives the difference of a and b as output.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mod - Function gives the remainder of the divided numbers.
 *
 * @a: The first number.
 *
 * @b: The second number.
 *
 * Return: Gives the remainder of the divided numbers as output.
 */

int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_mul - Function gives the product of two numbers.
 *
 * @a: The first number.
 *
 * @b: The second number.
 *
 * Return: Gives the product of two numbers as output.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_add - Function prints the sum of two numbers.
 *
 * @a: The first number.
 *
 * @b: The second number.
 *
 * Return: Gives the sum of a and b as output.
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
