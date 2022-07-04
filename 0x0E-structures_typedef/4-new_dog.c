#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doge;
	int a, b, c;
	char *n, *o;

	doge = malloc(sizeof(struct dog));
	if (doge == NULL)
		return (NULL);

	for (a = 0; name[a] != '\0'; a++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;

	n = malloc(sizeof(char) * a + 1);
	if (n == NULL)
	{
		free(doge);
		return (NULL);
	}
	o = malloc(sizeof(char) * b + 1);
	if (o == NULL)
	{
		free(n);
		free(doge);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		n[c] = name[c];
	for (c = 0; c <= b; c++)
		o[c] = owner[c];

	doge->name = n;
	doge->age = age;
	doge->owner = o;

	return (doge);
}
