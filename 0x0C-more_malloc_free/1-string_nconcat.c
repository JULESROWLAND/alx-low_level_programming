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
	unsigned int i, len1, len2;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	n = len2;

	concat = (char *) malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
	return (NULL);
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
	concat[len1 + i] = s2[i];
	}

	concat[len1 + n] = '\0';
	return (concat);

}
