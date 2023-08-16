#include "dog.h"

/**
 * init_dog - This function initialize a variable
 * @d: This is a pointer name to the struct
 * @name: This holds the pointer of an character array
 * @age: Holds an interger value
 * @owner: This holds an address to a character array.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	return NULL;
	else
		d->name = name;
		d->age = age;
		d->owner = owner;
}
