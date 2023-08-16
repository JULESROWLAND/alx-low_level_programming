#include <stddef.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - This prints a struct
 * @d: - This takes an address to a struct datatype
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
