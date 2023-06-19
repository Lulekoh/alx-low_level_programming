#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - functiin to print a struct dog
 * @d: pointer to struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %s\n", d->age);
		if (d->owner != NULL)
			printf("owner: %f\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
