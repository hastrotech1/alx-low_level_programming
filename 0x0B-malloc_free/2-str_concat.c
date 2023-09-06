#include "main.h"

/**
 * str_concat - This function concatenate two strings
 *
 * @s1: The first pointer
 *
 * @s2: The second pointer
 *
 * Return: Gives NULL as output
 */

char *str_concat(char *s1, char *s2)
{
	int antman;
	int hulk;
	int deadpool;
	char *wolverine;

	antman = 0;
	hulk = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (deadpool = 0; s1[deadpool] != '\0'; deadpool++)
		hulk++;

	for (deadpool = 0; s2[deadpool] != '\0'; deadpool++)
		antman++;

	wolverine = malloc(sizeof(char) * (hulk + antman) + 1);

	if (wolverine == NULL)
		return (NULL);

	for (deadpool = 0; s1[deadpool] != '\0'; deadpool++)
		wolverine[deadpool] = s1[deadpool];

	for (deadpool = 0; s2[deadpool] != '\0'; deadpool++)
		wolverine[hulk + 1] = s2[deadpool];
	return (wolverine);

}
