#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: the head node
 *
 * Return: the head node's data(n)
 * If the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int h_data;

	if (head != NULL)
	{
		ptr = *head;
		h_data = ptr->n;
		*head = ptr->next;
		free(ptr);
		return (h_data);
	}
	return (0);
}
