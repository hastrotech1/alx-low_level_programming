#include "main.h"

/**
 * alloc_grid - This function returns a pointer to a 2-d array
 *
 * @width: The row in the array
 *
 * @height: The column in the array
 *
 * Return: Give 0  or NULL
 */

int **alloc_grid(int width, int height)
{
	int flash, hulk;
	int **thor;

	if (width <= 0 || height <= 0)
		return (NULL);

	thor = malloc(sizeof(int *) * height);

	if (thor == NULL)
		return (NULL);

	for (hulk = 0; hulk < height; hulk++)
	{
		thor[hulk] = malloc(sizeof(int) * width);

		if (thor[hulk] == NULL)
		{

			for (flash = 0; flash <= height; flash++)
				free(thor[flash]);
			free(thor);
			return (NULL);
		}
		for (flash = 0; flash < width; flash++)
			thor[hulk][flash] = 0;
	}
	return (thor);
}
