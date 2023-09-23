#include "main.h"
#include <stdlib.h>

/**
* _realloc - Function realocates memory
* 
* @ptr: initail pointer to the malloc address
*
* @old_size: size of the intial pointer
*
* @new_size: new size to be assigned to the pointer address
*
* Return: Gives pointer to the address as output
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *old;

	unsigned int _int;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	new = malloc(new_size);
	if (!new)
	{
		return (NULL);
	}
	old = ptr;
	if (new_size < old_size)
	{
		for (_int = 0; _int < new_size; _int++)
		{
			new[_int] = old[_int];
		}
	}
	if (new_size > old_size)
	{
		for (_int = 0; _int < old_size; _int++)
		{
			new[_int] = old[_int];
		}
	}
	free(ptr);
	return (new);
}
