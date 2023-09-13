#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This function frees the memory of struct dog
 *
 * @d: Pointer to free struct dog
 *
 * Return: Gives 0 as output
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d -> name);
		free(d -> owner);
		free(d);
	}
}
