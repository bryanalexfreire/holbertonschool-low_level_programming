/**
 * main - Prints all single digit numbers of base 10 ...
 */

#include <stdio.h>

int main(void)
{
	int b = '0';

	while (b < '10')
	{
		putchar(b);
		b++;
	}
	return (0);
}
