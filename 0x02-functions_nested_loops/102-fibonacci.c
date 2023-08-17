#include <stdio.h>
/**
 * main - prints the fibonacci numbers
 * up to 50th term
 *
 * Return: Returns 0.
 */
int main(void)
{
	unsigned long int num[50], i;

	num[0] = 1;
	num[1] = 2;
	printf("%ld, %ld, ", num[0], num[1]);

	for (i = 2; i <= 49; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
		printf("%lu", num[i]);
		if (i <= 48)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
