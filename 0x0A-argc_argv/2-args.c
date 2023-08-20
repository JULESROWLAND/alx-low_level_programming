#include <stdio.h>

/**
 * main - This is the entry point
 * @argc: Counts arguments
 * @argv: Keeps tracks of argument passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
