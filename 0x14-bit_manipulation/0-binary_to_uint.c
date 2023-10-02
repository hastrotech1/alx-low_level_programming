#include "main.h"

/**
 * binary_to_uint - This function conveerts binaries to unsigned int
 *
 * @b: The string parameter that contains binary numbers in the function
 *
 * Return: Gives the converted number as output
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui_num;
	int val;

	ui_num = 0;
	val = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[val])
	{
		if (b[val] < '0' || b[val] > '1')
		{
			return (0);
		}
		ui_num = 2 * ui_num + (b[val] - '0');
		val++;
	}
	return (ui_num);
}
