#include <stdio.h>

/**
 * fast - prints a sting
 *
 * Return: Gives the output
 */

void fast(void)__attribute__((constructor));

void fast(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
