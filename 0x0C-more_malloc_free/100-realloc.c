#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - This reallocates memory using malloc
 * @ptr: This takes a pointer argument
 * @new_size: Takes an interger argument
 * @old_size: Takes an interger argument
 * Return: This returns a pointer, NULL values at different instances
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new;
	int diff;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
	{
		ptr = malloc(old_size - new_size);
		if(ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size > old_size)
	{
		diff = new_size - old_size;
		ptr = 







