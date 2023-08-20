#include <stdio.h>

/**
 * main - This is the entry point
 * @argc: This takes count of arguments passed
 * @argv: This is a string of all command passed
 * Return: This returns 0 on success
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
