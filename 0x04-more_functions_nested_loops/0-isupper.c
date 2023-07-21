#include <ctype.h>

/**
 * _isupper - Checks for uppercase characters.
 * Return: 1 (success), 0 (unsuccess).
 * @c: interger value to be checked.
 */
int _isupper(int c)
{
	if (isupper(c))
	return (1);
	else
	return (0);
}

