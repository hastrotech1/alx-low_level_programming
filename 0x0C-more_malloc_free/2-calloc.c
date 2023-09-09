#include "main.h"

/**
 * _calloc - This function allocates memory for an array
 *
 * @nmemb: The number of memory
 *
 * @size: The size of the memory
 *
 * Return: Gives 0 as output NULL when failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *avatar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	avatar = calloc(nmemb, size);

	if (avatar == NULL)
		return (NULL);
	else
		return (avatar);
}
