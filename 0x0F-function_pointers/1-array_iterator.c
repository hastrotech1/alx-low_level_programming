#include "function_pointers.h"

/**
 * array_iterator - This function executes a given parameter of a function
 *
 * @array: The integer value
 *
 * @size: The size of the array
 *
 * @action: The pointer to the function
 *
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int jacob = 0;

	if (array == NULL || action == NULL)
		return;

	while (jacob < size)
	{
		action(array[jacob]);
		jacob++;
	}
}

