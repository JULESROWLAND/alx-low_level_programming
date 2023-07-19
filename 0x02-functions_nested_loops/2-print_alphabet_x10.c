#include "main.h"

/**
 *  print_alphabet_x10 - This is a function
 *  Return: 0 Always
 */
void print_alphabet_x10(void)
{
	char let;
	int i;

	i = 0;
	while (i <= 10)
	{
	let = 'a';
	while (let <= 'z')
	{
	_putchar(let);
	let++;
	}
	 _putchar('\n');
	i++;
	}
}
