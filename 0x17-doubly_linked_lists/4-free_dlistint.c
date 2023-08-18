#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = head;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
