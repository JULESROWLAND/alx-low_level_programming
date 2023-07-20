#include "main.h"

/**
 *  print_alphabet_x10 - This is a function
 *  Return: 0 Always
 */
void print_alphabet_x10(void)
{
	char let;
	int i;


	for (i = 0; i <= 10; i++)
	{
	for (let = 'a'; let <= 'z'; let++)
	{
	_putchar(let);
	}
	 _putchar('\n');
	}
}
