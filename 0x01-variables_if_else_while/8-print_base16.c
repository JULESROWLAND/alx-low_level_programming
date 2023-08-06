#include <stdio.h>

/**
 * main - This is the entry point
 * Return: This prints 0.
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
