/**
 * main -Print the alphabet in lowercase, and thn in ...
 * Return: 0 on success.
 */

#include <stdio.h>
int main(void)
{
	char c = 'a';
	char d = 'A';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	return (0);
}
