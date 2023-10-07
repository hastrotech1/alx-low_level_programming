#include "betty.h"

/**
 * main - The function prints my name
 *
 * Return: Gives 0 as output
 */

int main(void)
{
	char *name;

	name = "My name is Hastro";

	spider_man(name);
	return (0);
}

/**
 * spider_man - The function print
 *
 * @str: The string to be printed
 *
 * Return: gives 0 as output
 */

int spider_man(char *str)
{
	printf("%s\n", str);
	return (0);
}
