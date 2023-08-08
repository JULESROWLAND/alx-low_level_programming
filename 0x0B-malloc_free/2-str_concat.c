#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - This is a function that points to a string
 * @s1: This takes a character argument
 * @s2: This takes a character argument
 * Return: This returns a pointer successful and NULL when unsucceful
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i, j, size, len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + len2 + 1;
	cat = (char *) malloc(size * sizeof(char));
	if (cat == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		cat[i + j] = s2[j];
	}
	cat[size - 1] = '\0';
	return (cat);
}
