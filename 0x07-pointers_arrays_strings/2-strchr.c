#include "main.h"
#include <stddef.h>

/**
 * _strchr - This checks for single characters
 * @s: This points to a char variable
 * @c: This hold a char argument
 * Return: a pointer if true and NULL if false
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
		return (s + i);
	}
	}
	return (NULL);
}
