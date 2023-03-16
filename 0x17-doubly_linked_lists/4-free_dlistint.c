#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: points to the first element on the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head != NULL)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
