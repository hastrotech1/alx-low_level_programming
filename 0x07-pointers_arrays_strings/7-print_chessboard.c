#include "main.h"

/**
 * print_chessboard - Function prints chess board
 *
 * @a: Thi is an array
 *
 *
 * Return: Gives 0 as output
 */

void print_chessboard(char (*a)[8])
{
	int chess;
	int board;

	for (chess = 0; chess < 8; chess++)
	{
		for (board = 0; board < 8; board++)
			_putchar(a[chess][board]);
		_putchar('\n');
	}
}
