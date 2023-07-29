#include "main.h"

/**
 * *cap_string - This converts strings to uppper when needed
 * @a: This takes in a string augument and it is pointer variable
 * Return: This returns a char type.
 */

char *cap_string(char *a)
{
	int i;
	int capitalizeNext = 1;

	for (i = 0; a[i] != '\0'; i++)
	{
	if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t' || a[i] == '.')
	{
	capitalizeNext = 1;
	}
	else
	{
	if (capitalizeNext && a[i] >= 'a' && a[i] <= 'z')
	{
	a[i] -= ('a' - 'A');
	}
	capitalizeNext = 0;
	}
	}
	return (a);
}
