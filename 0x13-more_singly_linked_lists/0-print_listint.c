#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * @h: pointer
 * Return: number of element
 */

size_t print_listint(const listint_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
