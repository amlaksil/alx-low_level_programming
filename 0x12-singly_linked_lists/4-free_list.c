#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list
 * @head: a pointer which points to the first element on the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
