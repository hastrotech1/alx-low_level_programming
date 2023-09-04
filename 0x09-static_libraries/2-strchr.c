#include "main.h"

/**
 * _strncat - function concatenates two strings
 *
 * @dest: A pointer to the destination string.
 *
 * @src: A pointer to the source string.
 *
 * @n: The maximum number of bytes
 *
 * Return: gives dest as output.
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = strlen(dest);
	int k;

	for (k = 0; k < n && *src != '\0'; k++)
	{
		dest[l + k] = *src;
		src++;
	}
	dest[l + k] = '\0';
	return (dest);
}
