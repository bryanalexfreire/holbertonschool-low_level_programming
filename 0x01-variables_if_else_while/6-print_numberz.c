/**
 * main - Prints all single digit numbers of base 10 ...
 * Return: 0 on success.
 */

#include <stdio.h>

int main(void)
{
	int i = '0';

	while (i < '10')
	{
		putchar(i);
		i++;
	}
	return (0);
}
