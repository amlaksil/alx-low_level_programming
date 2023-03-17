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
	if (index == 0 || (last_node == 2 && (index == 0 || index == 1)))
	{
		handle_index_0(head, last_node, index);
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
	else if (index > 0 && index < last_node)
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

/**
 * handle_index_0 - handle element delation at index = 0
 * @head: points to the first element in the list
 * @num_node: number of nodes
 * @index: the position where element is going to be delated
 *
 * Return: 1
 */
int handle_index_0(dlistint_t **head, size_t num_node, size_t index)
{
	dlistint_t *ptr = *head, *temp, *dtemp;

	if (num_node == 1)
	{
		free(ptr);
		*head = NULL;
		return (1);
	}
	if (num_node == 2 && index == 1)
	{
		dtemp = ptr->next;
		temp = ptr;
		ptr->next = NULL;
		free(dtemp);
		*head = temp;
		return (1);
	}
	temp = ptr->next;
	dtemp = ptr;
	ptr = temp;
	ptr->prev = NULL;
	free(dtemp);
	*head = temp;
	return (1);
}
