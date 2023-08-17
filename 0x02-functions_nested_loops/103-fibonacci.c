#include <stdio.h>
/**
 * main - Prints the fibonacci.
 *
 * Return: Returns 0, Success.
 */
int main(void)
{
	unsigned long int limit = 4000000;
	unsigned long int num1 = 0;
	unsigned long int num2 = 1;
	unsigned long int num = 0;
	unsigned long int sum = 0;

	while (limit > num)
	{
		num = num1 + num2;

		if ((num % 2) == 0)
		{
			sum += num;
		}
		num1 = num2;
		num2 = num;
	}
	printf("%li\n", sum);
	return (0);
}
