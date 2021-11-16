/**
 * free_listint - function that frees a listint_t list
 * @head: head node
 * @file 4-free_listint.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-16
 * @copyright Copyright (c) 2021
 * Return: void
 */
#include "lists.h"
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
