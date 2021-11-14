/**
 * list_len - function that returns the number of elements in a linked list_t list
 * @file 1-list_len.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-13
 * @copyright Copyright (c) 2021
 * 
 */
#include "lists.h"
size_t list_len(const list_t *h)
{
    size_t i = 0;
    while (h!=NULL)
    {
        h=h->next;
        i++;
    }
    return (i);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ||||5   44444444444                                                                                                                                                             3e