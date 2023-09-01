#include "main.h"

int superman_prime(int flash, int aquaman);

/**
 * is_prime_number - Function says if an integer is a prime number or not
 *
 * @n: The prime number to evaluate
 *
 * Return: Gives 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (superman_prime(n, n - 1));
}

/**
 * superman_prime - Function calculates if a number is prime recursively
 *
 * @flash: The number to evaluate
 *
 * @aquaman: The iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int superman_prime(int flash, int aquaman)
{
	if (aquaman == 1)
		return (1);
	if (flash % aquaman == 0 && aquaman > 0)
		return (0);
	return (superman_prime(flash, aquaman - 1));
}

