#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: points to the first item in the list
 * @n: element to be added
 *
 * Return: the address of the new element
 * or NUll if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (temp == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new->next = temp;
	temp->prev = new;
	*head = new;
	return (*head);
}
