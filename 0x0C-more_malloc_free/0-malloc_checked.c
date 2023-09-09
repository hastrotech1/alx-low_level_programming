#include "main.h"

/**
 * malloc_checked - This function allocates memory using malloc
 *
 * @b: The integer pointer
 *
 * Return: Gives a pointer to allocate memory
 */

void *malloc_checked(unsigned int b)
{
	char *blood_shot;

	blood_shot = malloc(b);

	if (blood_shot == NULL)
		exit(98);
	else
		return (blood_shot);
}
