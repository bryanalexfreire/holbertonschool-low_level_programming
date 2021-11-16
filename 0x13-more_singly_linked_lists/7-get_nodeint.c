/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list
 * @head: head node
 * @index: index node
 * @file 7-get_nodeint.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-16
 * @copyright Copyright (c) 2021
 * Return: address of index node
 */
#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		if (index == i)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (0);
}
