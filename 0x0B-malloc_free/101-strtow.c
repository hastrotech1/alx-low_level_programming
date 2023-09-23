#include "main.h"

/**
 * count_word - The helper function
 *
 * @s: The string to evaluate in the function
 *
 * Return: Gives the total number of words as output
 */

int word(char *count)
{
	int loop, check, i;

	loop = 0;
	i = 0;

	for (check = 0; count[check] != '\0'; check++)
	{
		if (count[check] == ' ')
			loop = 0;
		else if (loop == 0)
		{
			loop = 1;
			i++;
		}
	}

	return (i);
}

/**
 * **strtow - This function splits a string into words
 *
 * @str: The string to split in the function
 *
 * Return: Gives the pointer to an array of strings as output
 */

char **strtow(char *str)
{
	char **m, *t;
	int o, k = 0, str_len = 0;
	int words, c = 0, start, end;

	while (*(str + str_len))
		str_len++;

	words = word(str);

	if (words == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (words + 1));

	if (m == NULL)
		return (NULL);

	for (o = 0; o <= str_len; o++)
	{
		if (str[o] == ' ' || str[o] == '\0')
		{
			if (c)
			{
				end = o;

				t = (char *) malloc(sizeof(char) * (c + 1));

				if (t == NULL)
					return (NULL);

				while (start < end)
					*t++ = str[start++];

				*t = '\0';
				m[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = o;
	}
	m[k] = NULL;
	return (m);
}

