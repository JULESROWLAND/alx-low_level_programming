#include "main.h"

/**
 * puts2 - This prints even numbers of a string
 * @str: this takes a string data
 */
void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
	y++;
	i++;
	}
	t = i - 1;
	for (o = 0; o <= t; o++)
	{
	if (o % 2 == 0)
	{
	_putchar(str[o]);
	}
	}
	_putchar('\n');
}
