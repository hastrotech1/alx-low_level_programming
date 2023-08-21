#include "main.h"

/**
 * print_array - function prints n elements of an array
 *
 * @a: parameter one
 *
 * @n: parameter two
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		printf("%d", a[e]);
		if (e < n - 1)
			printf(", ");
	}
	printf("\n");
}
