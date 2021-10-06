/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024.
 * Return: Nothing.
 */
#include "main.h"
#include <stdio.h>
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
		printf("%d\n", res);
		return (0);
	}

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
		printf("%d\n", res);
		return (0);
	}
}
