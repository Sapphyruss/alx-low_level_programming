#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * @list: pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: pointer to the 1st node where value is located, NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump = sqrt((int)size), i = 0;
	listint_t *p = list, *h = list;

	if (list == NULL || size == 0 || value < list->n)
		return (NULL);
	while (p->index + 1 < size && value > h->n)
	{
		p = h;
		i += jump;
		while ((int)h->index < i)
		{
			if (h->index + 1 == size)
				break;
			h = h->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", h->index, h->n);
		if (h->index + 1 == size)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",  p->index, h->index);
	while (p->n < h->n && value > p->n)
	{
		printf("Value checked at index [%ld] = [%d]\n", p->index, p->n);
		p = p->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", p->index, p->n);
	if (value == p->n)
		return (p);
	return (NULL);
}
