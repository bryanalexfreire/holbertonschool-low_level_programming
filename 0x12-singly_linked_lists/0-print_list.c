/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: A constant variable of type list_t.
 * @file 0-print_list.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-11
 * @copyright Copyright (c) 2021
 * Return: i.
 */
#include "lists.h"
size_t print_list(const list_t *h)
{
unsigned int i = 0;
const list_t *new = h;

	while (new != NULL)
	{
		if (new->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", new->len, new->str);
		}
	new = new->next;
	i++;
	}
return (i);
}
