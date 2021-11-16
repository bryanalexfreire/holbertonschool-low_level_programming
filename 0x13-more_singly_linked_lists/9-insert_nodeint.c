/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 * @head: head node
 * @idx: index pos
 * @n: new node data
 * @file 9-insert_nodeint.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-16
 * Return: the address of the new node, or NULL if it
 * failed.
 * @copyright Copyright (c) 2021
 */
#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
