#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all the data(n) of a dlistint_t list
 * @head: points to the first element of the list
 *
 * Return: total sum
 * If the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
