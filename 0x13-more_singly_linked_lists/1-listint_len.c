#include "lists.h"

/**
 * listint_len -  number of elements in a linked
 * @h: points to a structure
 * Return: nuumber of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return(j);
}
