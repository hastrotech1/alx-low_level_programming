#include "variadic_functions.h"

/**
 * print_numbers - This function prints numbers, followed by a new line.
 *
 * @separator: String to be printed between numbers.
 *
 * @n: The number of integers.
 *
 * @...: The variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list john;
	unsigned int james;

	va_start(john, n);

	for (james = 0; james < n; james++)
	{
		printf("%d", va_arg(john, int));

		if (james != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(john);
}

