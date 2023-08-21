#include "main.h"

/**
 * _strlen - this function returns the lenght of a string
 *
 * @s: the string parameter
 *
 * Return: gives count of the strings lenght
 */

int _strlen(char *s)
{
	int c;
	int u = 0;

	for (c = 0; s[c] != '\0'; c++)
		u++;
	return (u);
}
