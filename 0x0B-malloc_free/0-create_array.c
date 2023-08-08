#include <stdlib.h>
#include "main.h"

/**
 * create_array - This is a pointer variable
 * @size: This takes an unsigned interger
 * @c: This takes a character arguement
 * Return: Null if unsuccefull.
 */
char *create_array(unsigned int size, char c)
{
	char *b = (char *) malloc(size * (sizeof(char)));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (b == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	return (b);
}
