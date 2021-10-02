/**
 * main - Prints the alphabet in lowercase
 * Return: 0 on success
 */

#include <stdio.h>

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != '2')
		{
			putchar(c);
		}
		c++;
	}
	return (0);
}
