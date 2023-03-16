#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the element of a dlistint_t list
 * @h: pointer to the start of a list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t num_nod = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		num_nod++;
		head = head->next;
	}
	return (num_nod);
}
