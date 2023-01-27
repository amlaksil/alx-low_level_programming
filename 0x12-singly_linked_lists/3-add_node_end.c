#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @str: a character string
 * @head: a double pointer which containes the address
 * of the head of a list
 *
 * Return: the address of the new element
 * If not NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *ptr, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[count])
		count++;

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;
	ptr = *head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			ptr->next = new;
	}
	return (head);
}
