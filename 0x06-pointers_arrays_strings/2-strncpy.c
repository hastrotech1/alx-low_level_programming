#include "main.h"

/**
 * _strncpy - Function copies the strings.
 *
 * @dest: A pointer destination.
 *
 * @src: A pointer source.
 *
 * @n: The maximum number of the string.
 *
 * Return: Gives dest as output
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[y] = src[y];
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
