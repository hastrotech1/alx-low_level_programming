#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: A pointer to the destination string.
 *
 * @src: A pointer to the source string.
 *
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int dest_lenght = 0;
	int src_lenght = 0;
	int q;

	for (q = 0; dest[q] != '\0'; q++)
		dest_lenght++;
	for (q = 0; src[q] != '\0'; q++)
		src_lenght++;
	for (q = 0; q <= src_lenght; q++)
		dest[dest_lenght + q] = src[q];
	return (dest);
}
