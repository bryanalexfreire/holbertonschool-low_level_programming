/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: head node
 * @file 8-sum_listint.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-16
 * @copyright Copyright (c) 2021
 * Return: sum
 */
#include "lists.h"
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (sum);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
