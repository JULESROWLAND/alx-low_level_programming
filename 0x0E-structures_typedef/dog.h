#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - This is a struct datatype
 * @name: This takes a pointer to a character
 * @age: This takes a float argument
 * @owner: This takes a pointer to a character argument
 */
struct dog
{
	char  *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
