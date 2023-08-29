#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - This function prints sum of two diagonals
 *
 * @a: An array
 *
 * @size: The maximum size input
 *
 * Return: Gives 0 as output
 */

void print_diagsums(int *a, int size)
{
	int n1, n2, x, g;

	n1 = 0;
	n2 = 0;
	for (x = 0; x <= (size * size); x = x + size + 1)
		n1 = n1 + a[x];

	for (g = size - 1; g <= (size * size) - size; g = g + size - 1)
		n2 = n2 + a[g];

	printf("%d, %d\n", n1, n2);
}
