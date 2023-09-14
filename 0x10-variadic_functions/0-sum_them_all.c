#include "variadic_functions.h"

/**
 * sum_them_all - This fuction returns the sum of all its paramters.
 *
 * @n: The number of paramters.
 *
 * @...: Variable number of paramters to calculate the sum.
 *
 * Return: Gives 0 when n == 0 as output
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list my_guy;
	unsigned int o, tot = 0;

	va_start(my_guy, n);

	for (o = 0; o < n; o++)
		tot += va_arg(my_guy, int);

	va_end(my_guy);

	return (tot);
}

