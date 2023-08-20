#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the entry point
 * @argc: This takes count of the argument
 * @argv: This takes the argument into an array of character
 * Return: This returns 0 always as successful
 */
int main(int argc, char *argv[])
{
	int i, mul, arg;

	i = 1;
	if (argc >= 3)
	{
	while (i < argc - 1)
	{
		arg = atoi(argv[i]);
		i++;
		mul = arg * atoi(argv[i]);
		printf("%d\n", mul);
	}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
