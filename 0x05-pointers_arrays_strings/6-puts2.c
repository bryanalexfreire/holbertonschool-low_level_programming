/**
 * puts2 - function that prints every other character of a string...
 * @str: pointer int type
 * Return: Always 0.
 */
#include "main.h"
#include <stdio.h>
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
