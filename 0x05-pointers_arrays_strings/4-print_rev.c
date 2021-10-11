/**
 * print_rev - function that prints a string, in reverse, followed...
 * @s: pointer int type
 * Return: Always 0.
 */
#include "main.h"
#include <stdio.h>
void print_rev(char *s);
{
	int len;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}
	s--;
	for (len = len; len != 0; len--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
