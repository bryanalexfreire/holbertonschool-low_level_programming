/**
 * main - Determine if a random numer is positive, negative or zero.
 * Return: 0 on success.
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* CODE */

	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
