#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * @d: Points to a struct variable address
 * @name: Points to a character of arrays
 * @age: Holds a float value
 * @owner: Points to a character array
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
