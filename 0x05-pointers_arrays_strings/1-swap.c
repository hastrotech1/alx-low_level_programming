#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first parameter
 *
 * @b: second parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int nsv = *a;

	*a = *b;
	*b = nsv;
}
