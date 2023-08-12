#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: gives 0
 */

int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("size of a long long int: %lu byte(s)\n", sizeof(e));
	printf("size of a long int: %lu byte(s)\n", sizeof(d));
	printf("size of a float: %lu byte(s)\n", sizeof(c));
	printf("size of char: %lu byte(s)\n", sizeof(b));
	printf("size of int: %lu byte(s)\n", sizeof(a));
	return (0);
}
