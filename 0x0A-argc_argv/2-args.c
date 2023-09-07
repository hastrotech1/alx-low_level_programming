#include "main.h"

/**
 * main - This function prints all the arguments it recieves
 *
 * @argc: The argument count
 *
 * @argv: The argument vector
 *
 * Return: Gives 0 as output
 */

int main(int argc, char *argv[])
{
	int green_lantern;

	for (green_lantern = 0; green_lantern < argc; green_lantern++)
		printf("%s\n", argv[green_lantern]);
	return (0);
}
