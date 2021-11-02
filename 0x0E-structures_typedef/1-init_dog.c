/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: name for struct
 * @name: variable for dog name
 * @age: variable for dog age
 * @owner: variable for dog owner
 * Return: 0.
 */
#include "dog.h"
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
