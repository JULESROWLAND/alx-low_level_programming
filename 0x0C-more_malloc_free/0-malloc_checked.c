#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - This allocate memory for an int value
 * @b: This takes in an unsigned interger argument
 * Return: a pointer on success
 * exist: This terminates the entire function both the caller and the called.
 */
void *malloc_checked(unsigned int b)
{
	int *check;

	check = malloc(b);
	if (check == NULL)
	{
	exit(98);
	}
	else
		return (check);
}
