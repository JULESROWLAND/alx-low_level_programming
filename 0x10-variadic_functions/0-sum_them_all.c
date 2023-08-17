#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * sum_them_all - This takes intergers and sum them all up
 * @n: This takes in an unsigned interger and other intergers
 * Return: returns an interger
 */
int sum_them_all(const unsigned int n, ...)
{
	int *b;
	int sum = 0;
	int myNumber;
	unsigned int i;
	va_list arg;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	b = (int *) malloc(n * sizeof(int));
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		myNumber = va_arg(arg, int);
		b[i] = myNumber;
		sum = sum + myNumber;
	}

	va_end(arg);
	free(b);
	return (sum);
}
