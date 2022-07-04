#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: The dog.
 * @name: The dog's name.
 * @age: The age of the dog.
 * @owner: The dog's owner.
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
