#include <stdlib.h>
#include <string.h>

/**
 * _strdup - This is a pointer function
 * @str: This takes in a pointer argument
 * Return: This returns a pointer when successful and NULL when unsucceful
 */
char *_strdup(char *str)
{
	char *b;
	unsigned int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str) + 1;
	b = (char *)malloc(size * (sizeof(char)));
	if (b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		b[i] = str[i];
	}
	return (b);
}
