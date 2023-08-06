#include <stdio.h>

/**
 * main - This is the Entry Point
 * Return: this return 0.
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 101 || a == 113)
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
