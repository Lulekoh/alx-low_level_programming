#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - initializes a variablr of type struct dog.
 * @d: pointer to struct to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
