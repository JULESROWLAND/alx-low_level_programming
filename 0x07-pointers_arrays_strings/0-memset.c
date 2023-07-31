#include "main.h"

/**
 * _memset - fill a block of memory with a specific value.
 * @s: This points to a variable array
 * @b: This takes a character argument
 * @n: This takes an interger array
 * Return: This returns a pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
