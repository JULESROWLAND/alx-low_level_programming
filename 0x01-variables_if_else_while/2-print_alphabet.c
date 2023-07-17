#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (success)
 */
int main(void)
{
	char letter[] = "abcdefghijklmnopqrstuvwxwz";
	int i;

	for (i = 0; i <= 26; i++)
		{
			putchar(letter[i]);
		}
	putchar('\n');
	return (0);
}
