#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the Entry point
 * @argc: Counts argument passed
 * @argv: keeps argument passed in an array
 * Return: This returns 0 when successful or 1 when not successful
 */
int main(int argc, char *argv[])
{
	int i, f, j;
	int sum = 0, z = 0;
	int valid_num = 0, invalid_num = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				invalid_num++;
				break;
			}
		}
		valid_num++;
		}

	if (invalid_num != 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			f = atoi(argv[i]);
			sum += f;
		}
		printf("%d\n", sum);
		return (0);
	}
	}
	else
	{
		printf("%d\n", z);
		return (0);
	}
}
