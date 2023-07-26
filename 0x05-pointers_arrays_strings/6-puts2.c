#include "main.h"

/**
 * puts2 - This prints even numbers of a string
 * @str: this takes a string data
 */
void puts2(char *str)
{
	int i, ch;

	for (i = 0; str[i] != '\0'; i++)
	{
	ch = str[i] - '0';
	if (ch % 2 == 0)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
