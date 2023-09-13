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


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
