#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int thor;

	thor = 0;

	while (s[thor] != '\0')
	{
		thor++;
	}
	return (thor);
}


/**
 * *_strcpy - copies the string pointed to by src
 *
 * including the terminating null byte (\0)
 *
 * to the buffer pointed to by dest
 *
 * @dest: pointer to the buffer in which we copy the string
 *
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int odin, meta;

	odin = 0;

	for (odin = 0; src[odin] != '\0'; odin++)

	for (meta = 0; meta < odin; meta++)
	{
		dest[meta] = src[meta];
	}
	dest[meta] = '\0';

	return (dest);
}


/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int me, you;

	me = _strlen(name);
	you = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (me + 1));
	
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (you + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

