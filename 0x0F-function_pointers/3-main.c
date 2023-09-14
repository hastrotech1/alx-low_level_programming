#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 *
 * @argc: The number of argument count supplied to the program.
 *
 * @argv: An array of pointers to the arguments vector
 *
 * Return: Gives 0 as output
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1;
	int num2;
	char *mop;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	mop = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(mop) == NULL || mop[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*mop == '/' && num2 == 0) || (*mop == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(mop)(num1, num2));

	return (0);
}
