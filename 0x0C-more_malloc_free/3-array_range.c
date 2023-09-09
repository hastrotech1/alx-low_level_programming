#include "main.h"

/**
 * array_range - This function creates an array of integers
 *
 * @min: The minmum value
 *
 * @max: The maximum value
 *
 * Return: Gives 0 as output, NULL if failed
 */

int *array_range(int min, int max)
{
	int *chase;
	int vision, flash;

	if (min > max)
		return (NULL);

	flash = max - min + 1;

	chase = malloc(sizeof(int) * flash);

	if (chase == NULL)
		return (NULL);

	for (vision = 0; vision < 1; vision++)
	{
		chase[vision] = min;
		min++;
	}
	return (chase);
}
