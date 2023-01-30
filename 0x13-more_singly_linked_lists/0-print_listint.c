#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: head pointer
 *
 * Return: the number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
