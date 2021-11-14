/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to add at the head of the list
 * Return: the adress of the new element, NULL if it failed
 * @file 2-add_node.c
 * @author your name (you@domain.com)
 * @version 0.1
 * @date 2021-11-14
 * @copyright Copyright (c) 2021
 */
#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int len = 0;

if (str == NULL)
return (NULL);
while (str[len])
len++;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = *head;
*head = new;

return (new);
}
