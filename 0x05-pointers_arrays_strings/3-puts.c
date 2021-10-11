/**
 * _puts - function that prints a string ...
 * @str: pointer int type
 * Return: Always 0.
 */
#include "main.h"
#include <stdio.h>
void _puts(char *str);
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
