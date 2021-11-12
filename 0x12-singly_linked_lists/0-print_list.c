/**
 * print_list - function that prints all the 
 * elements of a list_t list.
 * 
 * @file 0-print_list.c
 * @author Bryan Freire 
 * @version 0.1
 * @date 2021-11-11
 * 
 * @copyright Copyright (c) 2021
 * 
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