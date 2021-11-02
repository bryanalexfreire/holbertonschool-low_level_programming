/**
 * new_dog - function that creates a new dog.
 * @name: variable for dog name
 * @age: variable for dog age
 * @owner: variable for dog owner
 * Return: 0.
 */
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
