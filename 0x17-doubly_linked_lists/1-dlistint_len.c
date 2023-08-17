#include "lists.h"

/**
 * dlistint_len - get the length of the list
 * @h: the linked list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
