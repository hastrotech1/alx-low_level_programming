#include <stdio.h>
#include <stdlib.h>
/**
 * main - print numberZ
 *
 * Return: gives 0 as output
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
