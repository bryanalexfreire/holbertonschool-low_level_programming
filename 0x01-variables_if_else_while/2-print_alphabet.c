/**
 * main - Prints the alphabet in lowercase
 * Return: 0 on success.
 */
#include <stdio.h>
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
