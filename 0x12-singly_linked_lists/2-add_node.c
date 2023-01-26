#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer for singly linked list
 * @str: character pointer
 *
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t count;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (count = 0; str[count]; count++)
		;
	new->len = count;
	new->next = *head;
	*head = new;
	return (*head);
}
