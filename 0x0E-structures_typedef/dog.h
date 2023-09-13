#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Definition of a new type
 *
 * @name: The name of the dog
 *
 * @age: The age of the dog
 *
 * @owner: The owners name
 *
 * Return: Gives 0 on return
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

#endif
