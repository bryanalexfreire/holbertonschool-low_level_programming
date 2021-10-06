/**
 * print_sing - Determines whether an inter is positive, negative or zero.
 * @i: the number to be checked.
 * Return: 1 if positive, 0 if zero, -1 if negative.
 */
#include "main.h"
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (i < 0)
	{
		_putchar ('-')
		return (-1);
	}
}
