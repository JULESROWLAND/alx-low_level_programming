#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - This is the a function that prints list of numbers
 * @separator: This takes a character argument
 * @n: This takes a constant that tells the number of argument following
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int myNumber;
	va_list Print;

	va_start(Print, n);
	for (i = 0; i < n; i++)
	{
		myNumber = va_arg(Print, int);
		printf("%d", myNumber);
		if (i != (n-1) && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(Print);
}
