#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - This concatenate two strings
 * @s1: Takes a char argument
 * @s2: Takes a char argument
 * @n: Takes an interger value
 * Return: This returns pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len1, len2, size;

	if (s1 == NULL && s2 == NULL)
	{
	s1 = s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + len2 + 1;

	concat = (char *) malloc(size);
	if (concat == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	i = len1;
	if (n >= len2)
	{
		for (j = 0; j < len2; j++)
		{
			concat[i] = s2[j];
			i++;
		}
	}
	else if (n < len2)
	{
	for (j = 0; j < len2; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	}
	concat[size - 1] = '\0';
	return (concat);

}
