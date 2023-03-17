#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to pointer points to the first item on the list
 * @idx: the position given
 * @n: element to be insered to the list
 *
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new, *head = *h;
	size_t position = 0, num_node = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (head != NULL)
	{
		num_node++;
		head = head->next;
	}
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}
	else if (idx == num_node)
	{
		add_dnodeint_end(h, n);
		return (new);
	}
	else
	{
		while (ptr != NULL)
		{
			if (position == idx - 1)
			{
				new->next = ptr->next;
				new->prev = ptr, ptr->next = new;
				ptr = ptr->next->next;
				ptr->prev = new;
				return (new);
			}
			position++;
			ptr = ptr->next;
		}
	}
	return (NULL);
}
