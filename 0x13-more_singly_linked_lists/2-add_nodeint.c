/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list
 * @head: head node
 * @n: new node data
 * @file 2-add_nodeint.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-16
 * @copyright Copyright (c) 2021
 * Return: pointer to node
 */
#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
