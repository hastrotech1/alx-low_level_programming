#include "dog.h"

/**
 * init_dog - This function initialize a variable
 *
 * @d: The pointer to the variable
 *
 * @name: The character
 *
 * @age: The float variable
 *
 * @owner: The owner variable
 *
 * Return: Gives 0 as output
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
