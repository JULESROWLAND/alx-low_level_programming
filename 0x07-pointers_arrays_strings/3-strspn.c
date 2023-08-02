#include "main.h"

/**
 * _strspn - This checks for characters in another variable
 * @s: This takes a pointer argument
 * @accept: This takes another pointer argument
 * Return: This return a value
 */
unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int i = 0;

	while (*s)
	{
	for (index = 0; accept[index]; index++)
	{
	if (*s == accept[index])
	{
	i++;
	break;
	}
	else if (accept[index + 1] == '\0')
	{
	return (i);
	}
	}
	s++;
	}
	return (i);
}
