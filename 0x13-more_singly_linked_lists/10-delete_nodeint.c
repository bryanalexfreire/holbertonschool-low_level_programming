/**
 * delete_nodeint_at_index - function that deletes
 * the node at index index of a listint_t linked list
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 * @file 10-delete_nodeint.c
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2021-11-16
 * @copyright Copyright (c) 2021
 * Return: 1 if it succeeded, -1 if it failed.
 */
#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
