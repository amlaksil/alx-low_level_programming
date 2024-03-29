#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer which holds the address of head pointer
 * @idx: is the index of the list, starts at 0
 * @n: an integer element to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;

	unsigned int insertion_index = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	ptr = *head;
	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (*head);
	}
	while (ptr != NULL)
	{
		if (insertion_index == (idx - 1))
		{
			new->next = ptr->next;
			ptr->next = new;
			return (*head);
		}
		insertion_index++;
		ptr = ptr->next;
	}
	return (NULL);
}
