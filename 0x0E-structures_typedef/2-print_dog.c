#include "dog.h"

/**
 * print_dog - This function prints struct dog
 *
 * @d: The pointer
 *
 * Return: Gives 0 as output
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d -> name) ? d -> name : "(nil)");
		printf("Age: %f\n", (d -> age) ? d -> age : 0);
		printf("Owner: %s\n", (d -> woner) ? d -> owner : "(nil)");
	}
}
