#include "main.h"

/**
 * _strpbrk - This checks for the valuein two strings
 * @s: This takes a pointer as argument
 * @accept: This takes a pointer as argument
 * Return: This returns a pointers.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	{
	return (s);
	}
	else if (accept[i] == '\0')
	return (0);
	}
	s++;
	}
}
