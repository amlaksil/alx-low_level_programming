#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: points to the start of a list
 *
 * Return: the number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t num_node = 0;

	while (head != NULL)
	{
		num_node++;
		head = head->next;
	}
	return (num_node);
}
