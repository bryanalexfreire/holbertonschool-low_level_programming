/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list
 * @head: head node
 * @n: node data
 * @file 3-add_nodeint_end.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-16
 * @copyright Copyright (c) 2021
 * Return: address of new node
 */
#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	if (!head)
		return (0);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = 0;

	last = *head;
	if (!last)
	{
		*head = node;
		return (node);
	}

	while (last->next)
		last = last->next;
	last->next = node;
	return (node);
}
