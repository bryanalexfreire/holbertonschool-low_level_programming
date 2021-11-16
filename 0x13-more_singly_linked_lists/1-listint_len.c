/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to head
 * @file 1-listint_len.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-16
 * @copyright Copyright (c) 2021
 * Return: count
 */
#include "lists.h"
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
