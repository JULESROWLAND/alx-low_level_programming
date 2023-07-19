#include <ctype.h>
/**
 * _islower - Checks for lowercase
 * @c: Character to be checked
 * Return: 1 success if lowercase, 0 if not
 */

int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
