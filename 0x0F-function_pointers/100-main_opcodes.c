#include "function_pointers.h"

/**
 * main - This function prints its own opcodes
 *
 * @argc: The number of arguments
 *
 * @argv: The array of arguments
 *
 * Return: Gives 0 as output
 */

int main(int argc, char *argv[])
{
	int yum, mimi;
	char *dave;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	yum = atoi(argv[1]);

	if (yum < 0)
	{
		printf("Error\n");
		exit(2);
	}

	dave = (char *)main;

	for (mimi = 0; mimi < yum; mimi++)
	{
		if (mimi == yum - 1)
		{
			printf("%02hhx\n", dave[mimi]);
			break;
		}
		printf("%02hhx ", dave[mimi]);
	}
	return (0);
}
