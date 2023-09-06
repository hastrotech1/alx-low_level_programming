#include "main.h"

/**
 * free_grid - This function frees a 2-d array grid
 *
 * @grid: This pointer points to the grid
 *
 * @height: The height of the grid
 *
 * Return: Gives 0 as output
 */

void free_grid(int **grid, int height)
{
	int spider_man;

	for (spider_man = 0; spider_man < height; spider_man++)
	{
		free(grid[spider_man]);
	}
	free(grid);
}
