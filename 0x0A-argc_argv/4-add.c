#include "main.h"

/**
 * main - This function adds positive numbers
 *
 * @argv: This is an argument vector
 *
 * @argc: This is an argument count
 *
 * Return: Gives 0  as output
 */

int main(int argc, char *argv[])
{
	int vision;
	int pen;
	int biro;

	vision = 0;

	for (pen = 1; pen < argc; pen++)
	{
		for (biro = 0; argv[pen][biro] != '\0'; biro++)
		{
			if (!isdigit(argv[pen][biro]))
			{
				printf("ERROR!!\n");
				return (1);
			}
		}
		vision = vision + atoi(argv[pen]);
	}
	printf("%d\n", vision);
	return (0);
}
