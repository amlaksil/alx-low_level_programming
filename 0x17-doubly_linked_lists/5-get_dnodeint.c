#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint linked list
 * @head: points the first element on the list
 * @index: index to be given
 *
 * Return: if the node does not exit, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int num_node = 0;

	while (temp != NULL)
	{
		if (num_node == index)
			return (temp);
		num_node++;
		temp = temp->next;
	}
	return (NULL);
}
