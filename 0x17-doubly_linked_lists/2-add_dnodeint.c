#include "lists.h"

/**
 * create_node - create an new node
 * @data: the element of the node
 * Return: new node
 */

dlistint_t *create_node(int data)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = data;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

/**
 * add_dnodeint - add a node to the begining of the list
 * @head: the linked list
 * @n: the element of the new node
 * Return: address to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = create_node(n);

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (newNode);
}
