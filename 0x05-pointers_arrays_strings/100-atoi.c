#include "main.h"

/**
* _atoi - converts a string to an integer
*
* @s: string to be converted
*
* Return: the int converted from the string
*/

int _atoi(char *s)
{
	int d, a, n, i, e, l;

	d = 0;
	a = 0;
	n = 0;
	i = 0;
	e = 0;
	l = 0;

	while (s[i] != '\0')
		i++;
	while (d < i && e == 0)
	{
		if (s[d] == '-')
			++a;
		if (s[d] >= '0' && s[d] <= '9')
		{
			l = s[d] - '0';
			if (a % 2)
				l = -l;
			n = n * 10 + l;
			e = 1;
			if (s[d + 1] < '0' || s[d + 1] > '9')
				break;
			e = 0;
		}
		d++;
	}
	if (e == 0)
		return (0);
	return (n);
}
