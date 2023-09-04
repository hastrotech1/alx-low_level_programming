#include "main.h"

/**
 * _strstr - This function finds the first occurence of the substring needle
 *
 * @haystack: The pointer of the function
 *
 * @needle: The source of the pointer
 *
 * Return: Gives 0 if substring is not foun
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (haystack);
	}
	return (0);
}
