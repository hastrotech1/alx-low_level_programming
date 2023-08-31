#include "main.h"

/**
 * _strlen_recursion - This function prints the string lenght
 *
 * @s: The sting variable
 *
 * Return: The lenght of the string
 */

int _strlen_recursion(char *s)
{
	int pineapple = 0;

	if (*s != '\0')
	{
		pineapple++;
		pineapple += _strlen_recursion(s + 1);
	}
	return (pineapple);
}
