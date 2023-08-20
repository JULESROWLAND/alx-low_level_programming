#include <stdio.h>

/**
 * main - This is an entry point
 * @argc: Take interger as argument to count
 * @argv: Takes strings of argument
 * Return: 0 always successful
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	
	printf("%d\n", argc - 1);
	argc++;
	return (0);
}
