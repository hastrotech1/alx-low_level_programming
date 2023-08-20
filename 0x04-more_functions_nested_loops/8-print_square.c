#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int row1, col1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row1 = 0; row1 < size; row1++)
		{
			for (col1 = 0; col1 < size; col1++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
