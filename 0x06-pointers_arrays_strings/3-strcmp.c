#include "main.h"
#include <string.h>

/**
 * _strcmp - This compares two strings
 * @s1: This takes a string argument
 * @s2: This takes a string argument
 * Return: This return thr value of the strcmp.
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	if (result == 0)
	{
	return (0);
	}
	else
	return (result);
}
