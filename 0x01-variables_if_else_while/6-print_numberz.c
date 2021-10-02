/**
 * main - Prints all single digit numbers of base 10 ...
 * Return: 0 on success.
 */

#include <stdio.h>

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
