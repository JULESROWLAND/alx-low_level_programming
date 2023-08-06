#include <stdio.h>

/**
 * main - The Entry point
 * Return: This returns a value of 0.
 */
int main(void)
{
	int a;

	for (a = 122; a <= 122 && a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
