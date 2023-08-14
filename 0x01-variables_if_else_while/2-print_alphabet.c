#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets in lowercase, followed by a new line
 *
 * Return: gives 0 as output
 */

int main(void)
{

	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
