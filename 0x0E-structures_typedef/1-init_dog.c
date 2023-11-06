#include <stdio.h>
#include "dog.h"
/**
 * init_dog - entry point
 * struct dog *d - struct point
 * @d: mem
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
