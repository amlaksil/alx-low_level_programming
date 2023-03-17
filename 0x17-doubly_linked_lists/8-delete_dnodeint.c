#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the given index
 * @head: pointer to the first element in the list
 * @index: index given
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	dlistint_t *temp;
	unsigned int num = 0;

	if (index == 0)
	{
		ptr = ptr->next;
		ptr->prev = NULL;
		return (1);
	}
	while (ptr != NULL)
	{
		if (num == index - 1)
		{
			ptr->next = ptr->next->next;
			temp = ptr;
			ptr = ptr->next->next;
			free(ptr->prev->prev);
			ptr->prev = temp;
			return (1);
		}
		num++;
		ptr = ptr->next;
	}
	return (-1);
}
