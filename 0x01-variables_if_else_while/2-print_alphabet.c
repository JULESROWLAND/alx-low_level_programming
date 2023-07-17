#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (success)
 */
int main(void)
{
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 25; i++)
		{
			putchar(letter[i]);
		}
	putchar('\n');
	return (0);
}
