#include <ctype.h>

/**
 * _isalpha - This checks for alphebetic character
 *
 * @c: This is the character to be checked
 * Return: 1 success, 0 for anything else
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
