/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: head node
 * @file 6-pop_listint.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-16
 * @copyright Copyright (c) 2021
 * Return: head node data
 */
#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *second;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	second = (*head)->next;
	(*head)->next = 0;
	free(*head);
	*head = second;
	return (data);
}
