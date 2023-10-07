#include "main.h"

int my_palin_drome(char *_char, int int_1, int int_2);
int string_rec(char *_strlen);

/**
 * string_rec - THis function returns the length of a string
 *
 * @_strlen: The pointer string to calculate the string length
 *
 * Return: Gives the length of the string as output
 */

int string_rec(char *_strlen)
{
	if (*_strlen == '\0')
		return (0);
	return (1 + string_rec(_strlen + 1));
}

/**
 * is_palindrome - This function checks if a string is a palindrome
 *
 * @s: The string parameter to reverse
 *
 * Return: Gives 1 as output
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (my_palin_drome(s, 0, string_rec(s)));
}

/**
 * my_palin_drome - checks the characters recursively for palindrome
 *
 * @_char: string to check
 *
 * @int_1: The parameter to iterate through
 *
 * @int_2: Second length of the string parameter
 *
 * Return: Gives 1 if palindrome, 0 if not, as output
 */

int my_palin_drome(char *_char, int int_1, int int_2)
{
	if (*(_char + int_1) != *(_char + int_2 - 1))
		return (0);

	if (int_1 >= int_2)
		return (1);

	return (my_palin_drome(_char, int_1 + 1, int_1 - 1));
}
