#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the given index
 * @head: pointer to the first element in the list
 * @index: a position to be given, it starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *current = *head, *temp, *dtemp;
	unsigned int position = 0, last_node = 0;

	if (ptr == NULL)
		return (-1);
	last_node = dlistint_len(current);
	if (index == 0)
	{
		temp = ptr->next, dtemp = ptr, ptr->prev = NULL;
		free(dtemp), *head = temp;
		return (1);
	}
	else if (last_node == index)
	{
		while (ptr != NULL)
		{
			position++, ptr = ptr->next;
			if (position == last_node - 1)
			{
				dtemp = ptr->next, ptr->next = NULL;
				free(dtemp);
				return (1);
			}
		}
	}
	else
	{
		while (ptr != NULL)
		{
			if (position == index - 1)
			{
				temp = ptr, dtemp = ptr->next;
				ptr->next = ptr->next->next, ptr = ptr->next;
				ptr->prev = temp, free(dtemp);
				return (1);
			}
			position++, ptr = ptr->next;
		}
	}
	return (-1);
}

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
