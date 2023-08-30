#include "lists.h"

/**
 * listint_len -  number of elements in a linked
 * @h: points to a structure
 * Return: elements
 */

size_t listint_len(const listint_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return(j);
}
