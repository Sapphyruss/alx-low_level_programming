#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: the linked list
 * @idx: the index to insert the node
 * @n: element in the node
 * Return: address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = create_node(n), *current = *h;
	unsigned int i = 0;

	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (current)
	{
		if (i == idx - 1)
		{
			newNode->prev = current;
			newNode->next = current->next;
			if (current->next != NULL)
				current->next->prev = newNode;
			current->next = newNode;
			return (newNode);
		}
		current = current->next;
		i++;
	}
	free(newNode);
	return (NULL);
}
