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
	for (x = 0; x < size; x++)
	{
		n1 = n2 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		n2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", n1, n2);
}
