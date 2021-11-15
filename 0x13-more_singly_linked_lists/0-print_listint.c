/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: list
 * Return: size_t
 * @file 0-print_listint.c
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2021-11-15
 * @copyright Copyright (c) 2021
 */
#include "lists.h"
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (i);
}
