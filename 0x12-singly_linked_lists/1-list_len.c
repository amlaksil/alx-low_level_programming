#include "lists.h"

/**
 * list_len - count the number of elements in a linked list_t list
 * @h: a struct pointer
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
