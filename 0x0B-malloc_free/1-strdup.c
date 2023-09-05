#include "main.h"

/**
 * _strdup - This function returns a pointer to a newly allocated space
 *
 * @str: The string pointer
 *
 * Return: Gives NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *bat_man;
	int flash;
	int thor;

	flash = 0;
	if (str == NULL)
		return (NULL);

	bat_man = malloc(sizeof(char) * flash + 1);

	if (bat_man == NULL)
		return (NULL);
	for (thor = 0; str[thor] != '\0'; thor = thor + 1)
		flash++;
	for (thor = 0; str[thor] != '\0'; thor++)
		bat_man[thor] = str[thor];
	return (bat_man);
}
