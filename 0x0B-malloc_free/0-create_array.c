#include "main.h"

/**
 * create_array - This function creates an array of chars
 *
 * @size: The size pointer of the char
 *
 * @c: The char value to be inputed
 *
 * Return: Gives a pointer 0 to the array, or NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	unsigned int iron_man;
	char *blue_bettle;

	blue_bettle = malloc(sizeof(char) * size);

	if (blue_bettle == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (iron_man = 0; iron_man < size; iron_man++)
		blue_bettle[iron_man] = c;
	return (blue_bettle);
}
