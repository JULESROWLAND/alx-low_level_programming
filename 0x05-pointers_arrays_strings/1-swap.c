#include "main.h"

/**
 * swap_int - This swaps two pointer values
 * @a: interger value
 * @b: interger value
 */
void swap_int(int *a, int *b)
{
	int sw = *a;
	*a = *b;
	*b = sw;
}
