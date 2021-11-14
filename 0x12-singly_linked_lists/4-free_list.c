/**
 * free_list - function that frees a list_t list
 * @head: pointer to the head of the list
 * @file 4-free_list.c
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2021-11-14
 * @copyright Copyright (c) 2021
 */
#include "lists.h"
void free_list(list_t *head)
{
list_t *p;

while (head)
{
p = head->next;
free(head->str);
free(head);
head = p;
}
}
