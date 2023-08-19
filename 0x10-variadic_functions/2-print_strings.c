#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_strings - This Prints a number of strings
 * @n: This takes an unsigned int which tells the number of strings inputted
 * @separator: takes a pointer to char
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char  *myString;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		myString = va_arg(strings,  char *);
		if (myString == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", myString);
		}
		if (i != (n - 1) && separator != NULL)

			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
