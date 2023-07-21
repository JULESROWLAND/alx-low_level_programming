#include <ctype.h>

/**
 * _isdigit - This checks for digits
 * Return: 1 if true, 0 if false.
 * @c: interger value.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	return (1);
	else
	return (0);
}
