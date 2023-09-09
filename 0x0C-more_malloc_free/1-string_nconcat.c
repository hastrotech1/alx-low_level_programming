#include "main.h"

/**
 * string_nconcat - This function concatenates two strings
 *
 * @s2: The second pointer to the string
 *
 * @n: The number of strings
 *
 * @s1: The first pointer to the string
 *
 * Return: Gives 0 as output and NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int mimi, tumi, timi;
	char *hastro;

	tumi = 0;
	timi = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (mimi = 0; s1[mimi] != '\0'; mimi++)
		timi++;
	for (mimi = 0; s2[mimi] != '\0'; mimi++)
		tumi++;

	hastro = malloc(sizeof(char) * (timi + n) + 1);

	if (hastro == NULL)
		return (NULL);

	if (n >= tumi)
	{
	for (mimi = 0; s1[mimi] != '\0'; mimi++)
		hastro[mimi] = s1[mimi];
	for (mimi = 0; s2[mimi] != '\0'; mimi++)
		hastro[timi + mimi] = s2[mimi];
	hastro[timi + mimi] = '\0';
	}
	else
	{
		for (mimi = 0; s1[mimi] != '\0'; mimi++)
			hastro[mimi] = s1[mimi];
		for (mimi = 0; mimi < n; mimi++)
			hastro[timi + mimi] = s2[mimi];
		hastro[timi + mimi] = '\0';
	}
	return (hastro);
}
