#include "main.h"

/**
 * print_alphabet - This is a function
 * main - Entry point
 * Return: 0 Always success
 */

void print_alphabet(void)
{
	char letts[] = "abcdefjhijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		_putchar(letts[i]);
	}
	_putchar('\n');
}
