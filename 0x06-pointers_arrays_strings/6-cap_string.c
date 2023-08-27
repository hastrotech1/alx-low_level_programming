#include "main.h"

/**
 * cap_string - This function capitalizes words.
 *
 * @str: The string parameter
 *
 * Return: give string as output
 */

char *cap_string(char *str)
{
	int f;

	f = 0;
	while (str[f])
	{
		while (!(str[f] >= 'a' && str[f] <= 'z'))
			f++;
		if (str[f - 1] == ' ' ||
				str[f - 1] == '\t' ||
				str[f - 1] == '\n' ||
				str[f - 1] == ',' ||
				str[f - 1] == ';' ||
				str[f - 1] == '.' ||
				str[f - 1] == '!' ||
				str[f - 1] == '?' ||
				str[f - 1] == '"' ||
				str[f - 1] == '(' ||
				str[f - 1] == ')' ||
				str[f - 1] == '{' ||
				str[f - 1] == '}' ||
				f == 0)
		str[f] -= 32;

	f++;
	}
	return (str);
}
