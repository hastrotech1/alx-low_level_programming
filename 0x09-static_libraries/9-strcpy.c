#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src*
 *
 * @dest: given parameter
 *
 * @src: given source parameter
 *
 * Return: gives dest as return value
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
