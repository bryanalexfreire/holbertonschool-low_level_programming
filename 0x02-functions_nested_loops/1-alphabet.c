/**
 *  print_alphabet - prints the english alphabet from a-z.
 *  Return: Nothing.
 */
#include "main.h"
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
