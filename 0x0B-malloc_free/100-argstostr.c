#include "main.h"

/**
 * argstostr - This function commectyd html
 *
 * @av: The pointer array.
 *
 * @ac: The input integer.
 *
 * Return: Gives 0 as output
 */

char *argstostr(int ac, char **av)

{
	int nora, ben;
	int ralph = 0;
	int larry = 0;
	char *tony_stark;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (nora = 0; nora < ac; nora++)
	{
		for (ben = 0; av[nora][ben]; ben++)
			larry++;
	}
	larry += ac;

	tony_stark = malloc(sizeof(char) * larry + 1);
	if (tony_stark == NULL)
		return (NULL);
	for (nora = 0; nora < ac; nora++)
	{
	for (ben = 0; av[nora][ben]; ben++)
	{
		tony_stark[ralph] = av[nora][ben];
		ralph++;
	}
	if (tony_stark[ralph] == '\0')
	{
		tony_stark[ralph++] = '\n';
	}
	}
	return (tony_stark);
}

