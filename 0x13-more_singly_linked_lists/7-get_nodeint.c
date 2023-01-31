#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node in listint_t linked list
 * @index: is the index of the node, starting at 0
 * @head: head pointer
 *
 * Return: the nth node in the listint_t list
 * If the node does not exitst, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_index = 0;

	while (head != NULL)
	{
		if (node_index == index)
			return (head);
		head = head->next;
		node_index++;
	}
	return (NULL);
}
