#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to pointer points to the first item on the list
 * @idx: the position given
 * @n: element to be insered to the list
 *
 * Return: the address of the new node
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *new;
	unsigned int position = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
		add_dnodeint(h, n);
	while (ptr != NULL)
	{
		if (position == idx - 1)
		{
			new->next = ptr->next;
			new->prev = ptr;
			ptr->next = new;
			ptr = ptr->next;
			ptr->prev = new;
			return (*h);
		}
		position++;
		ptr = ptr->next;
	}
	if (position == idx)
		add_dnodeint_end(h, n);
	return (NULL);
}
