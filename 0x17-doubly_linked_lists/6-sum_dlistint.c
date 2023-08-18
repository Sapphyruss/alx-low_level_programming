#include "lists.h"

/**
 * sum_dlistint - calculate to sum of all the elements in linked list
 * @head: the linked list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
