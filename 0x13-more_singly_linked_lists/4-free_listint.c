#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head pointer for the list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *del;

	del = head;
	while (del)
	{
		head = head->next;
		free(del);
		del = head;
	}
}
