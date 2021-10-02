/**
 * main - Prints all posible combinations of single-digit numbers
 * Return: 0 on success.
 */

#include <stdio.h>

int main(void)
{
	int i = '0';

	while (i <= '0')
	{
		putchar("%d", i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	return (0);
}
