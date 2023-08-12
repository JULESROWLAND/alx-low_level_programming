#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _calloc -This sets value for all allocated spaces
 * @nmemb: Takes int argument
 * @size: Takes int argument
 * Return: returns pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc;
        int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	i = nmemb * size;
	alloc = malloc(i);
	if (alloc == NULL)
	return (NULL);

	memset(alloc, 0, i);

	return (alloc);
}
