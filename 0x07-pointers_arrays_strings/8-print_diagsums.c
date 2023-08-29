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
	int n1;
	int n2;
	int x;

	n1 = 0;
	n2 = 0;
	for (x = 0; x <= (size * size); x = x + size + 1)
	{
		n1 = n2 + a[x];
	}
	for (x = size - 1; x <= (size * size) - size; x = x + size - 1)
	{
		n2 = n2 + a[x];
	}
	printf("%d, %d\n", n1, n2);
}
