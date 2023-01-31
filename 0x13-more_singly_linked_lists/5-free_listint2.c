#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *del;

	if (head != NULL)
	{
		ptr = *head;
		while (ptr != NULL)
		{
			del = ptr;
			ptr = ptr->next;
			free(del);
		}
		*head = NULL;
	}
}
