#include "main.h"

/**
 * _memcpy - This copies data from one memory to another.
 * @dest: This stores a char data
 * @src: This stores a char arguement
 * @n: This stores an unisgned int
 * Return: this returns a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
