/**
 * print_line - draw a straight line
 * @n: number
 */
#include "main.h"
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
