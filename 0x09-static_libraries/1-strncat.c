#include "main.h"

/**
 * _memcpy - This function copies the memory area
 *
 * @dest: The pointer destination
 *
 * @src: The pointer source
 *
 * @n: The maximum number of memory copied
 *
 * Return: gives dest as output
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int kob;

	for (kob = 0; kob < n; kob++)
		dest[kob] = src[kob];
	return (dest);
}
