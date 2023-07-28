#include "main.h"

/**
 * reverse_array - This function reverses the array of items
 * @a: This is a pointer variable
 * @n: This takes an interger
 */
void reverse_array(int *a, int n)
{
	int i, space;

	i = 0;
	while (i < n--)
	{
	space = a[i];
	a[i] = a[n];
	a[n] = space;
	i++;
	}
}
