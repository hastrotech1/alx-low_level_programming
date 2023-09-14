#include "variadic_functions.h"

/**
 * print_strings - This function prints strings, followed by a new line.
 *
 * @separator: The string to be printed.
 *
 * @n: Number of strings passed to the function.
 *
 * @...: The variable number of strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list leo;
	char *neo;
	unsigned int cat;

	va_start(leo, n);

	for (cat = 0; cat < n; cat++)
	{
		neo = va_arg(leo, char *);

		if (neo == NULL)
			printf("(nil)");
		else
			printf("%s", neo);

		if (cat != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(leo);
}

