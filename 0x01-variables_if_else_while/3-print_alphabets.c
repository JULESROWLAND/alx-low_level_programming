#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 Always (success)
 */
int main(void)
{
	char let[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{

	putchar(let[i]);

	}

	putchar('\n');
	return (0);
}
