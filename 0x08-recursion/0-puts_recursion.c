/**
 * _puts_recursion - function that prints a string...
 * @s: ponter to string.
 * Return: string.
 * Description: programa prints a string.
 */
#include "main.h"
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{i
		_putchar(s);
		s++;
		return (_puts_recursion(s));
	}
	else
	{
		return ('\n');
	}
}
