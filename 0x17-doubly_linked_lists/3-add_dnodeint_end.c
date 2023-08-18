#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of a linked list
 * @head: the head of the linked list
 * @n: the element of the linked list
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = create_node_new(n);

	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
		*head = newNode;
	else
	{
		dlistint_t *current = *head;

		while (current->next)
			current = current->next;
		current->next = newNode;
		newNode->prev = current;
	}
	return (newNode);
}

/**
 * create_node_new - create new node
 * @data: the element of the node
 * Return: the new node
 */

dlistint_t *create_node_new(int data)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = data;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
