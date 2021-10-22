/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: pointer for string
 * Return: reverse string
 */
#include "main.h"
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
