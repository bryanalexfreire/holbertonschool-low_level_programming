/**
 * _strlen - check function that returns the length of a string.
 * @str: variable for text
 * Return: Always 0.
 */
#include "main.h"
#include <stdio.h>
int _strlen(char *str)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
