/**
 * print_array - function that copies the string pointed to by src ...
 * @a: pointer int type
 * @n: is a int variable
 * Return: Always 0.
 */
#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int i, inte;

	for (i = 0; i < n; i++)
	{
		inte = *(a + i);
		printf("%d", inte);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
