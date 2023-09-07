#include "main.h"

/**
 * _atoi - This function converts the string to an integer
 *
 * @venom: This is the string to be converted
 *
 * Return: Gives int from the string
 */

int _atoi(char *venom)
{
	int scarlet = 0;
	int optimistic = 0;
	int zen = 0;
	int moreles = 0;
	int idgf = 0;
	int dfkm = 0;

	while (venom[zen] != '\0')
		zen++;
	while (idgf < zen && optimistic == 0)
	{
		if (venom[idgf] == '-')
			moreles++;

		if (venom[idgf] >= '0' && venom[idgf] <= '9')
		{
			dfkm = venom[idgf] - '0';
			if (moreles % 2)
				dfkm = -dfkm;
			scarlet = scarlet * 10 + dfkm;
			optimistic = 1;
			if (venom[idgf + 1] < '0' || venom[idgf + 1] > '9')
				break;
			optimistic = 0;
		}
		idgf++;
	}
	if (optimistic == 0)
		return (0);
	return (scarlet);
}

/**
 * main - This function multiplies two numbers
 *
 * @argc: This is an argument count
 *
 * @argv: This is an argument vector
 *
 * Return: Gives 0 as an output
 */

int main(int argc, char *argv[])
{
	int simba;
	int scar;
	int utah;

	if (argc < 3 || argc > 3)
	{
		printf("ERROR!!\n");
		return (1);
	}

	utah = _atoi(argv[1]);
	scar = _atoi(argv[2]);
	simba = utah * scar;

	printf("%d\n", simba);
	return (0);
}
