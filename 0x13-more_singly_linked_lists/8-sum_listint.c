#include "lists.h"

/**
 * sum_listint - sums all data of a listint_t linked list
 * @head: head pointer
 *
 * Return: the sum of all the data of a list
 * If the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
