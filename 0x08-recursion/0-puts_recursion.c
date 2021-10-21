/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: ponter to string
 * Return: string.
 */
#include "main.h"
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		putchar('\n');
	}
}
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
