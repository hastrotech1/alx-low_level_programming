#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of integers.
 *
 * @a: The array parameter.
 *
 * @n: Maximum number to be printed
 *
 * Return: gives rev as output
 */

void reverse_array(int *a, int n)
{
	int o;
	int h;

	for (o = 0; o < n; o++)
	{
		n--;
		h = a[o];
		a[o] = a[n];
		a[n] = h;
	}
}
