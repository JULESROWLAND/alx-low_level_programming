#include "main.h"
/**
 * print_sign - This prints characters based on some actions
 * @n: This is the character used for the condition check
 * Return: 1 if greater, 0 if it is zero, -1 of less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
