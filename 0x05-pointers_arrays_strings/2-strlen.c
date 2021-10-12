/**
 * _strlen - check function that returns the length of a string.
 * @s: is a pointer int char type
 * Return: Always 0.
 */
#include "main.h"
#include <stdio.h>
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
	s++;
	return (len);
}
