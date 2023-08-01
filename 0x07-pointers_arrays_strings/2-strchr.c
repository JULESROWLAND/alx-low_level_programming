#include "main.h"

/**
 * _strchr - This checks for single characters
 * @s: This points to a char variable
 * @c: This hold a char argument
 * Return: a pointer if true and NULL if false
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	i++;
	}
	return (0);
}
