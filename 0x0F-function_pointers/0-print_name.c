#include "function_pointers.h"

/**
 * print_name - This function prints a name
 *
 * @name: The name to be printed
 *
 * @f: The function pointer
 *
 * Return: No return value
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
