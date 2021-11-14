/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to add
 * Return: the address of the new element, or NULL if it failed
 * @file 3-add_node_end.c
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2021-11-14
 * @copyright Copyright (c) 2021
 */
#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
int len = 0;
list_t *new, *fin;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

if (str == NULL)
{
free(new);
return (NULL);
}

while (str[len])
len++;

new->str = strdup(str);
new->len = len;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
fin = *head;
while (fin->next != NULL)
fin = fin->next;
fin->next = new;
return (*head);
}
