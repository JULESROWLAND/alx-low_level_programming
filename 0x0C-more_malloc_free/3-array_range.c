#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - This create an array with range
 * @min: Takes in interger argument
 * @max: Takes in interger argument
 * Return: return pointer on success and NULL if not successful
 */
int *array_range(int min, int max)
{
	int *range;
	int i, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	range = (int *) malloc(size * sizeof(int));
	if (range == NULL)
	return (NULL);

	for (i = 0; min <=  max; i++)
	{
		range[i] = min++;
	}
	return (range);
}
