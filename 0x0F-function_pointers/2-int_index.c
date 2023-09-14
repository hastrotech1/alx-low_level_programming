#include "function_pointers.h"

/**
 * int_index - This array searches for integer
 *
 * @size: The number of elements in the array
 *
 * @array: The pointer array
 *
 * @cmp: A pointer to the function
 *
 * Return: Gives 0 as output
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
