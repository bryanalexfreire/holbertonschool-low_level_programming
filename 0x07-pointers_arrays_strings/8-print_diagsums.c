/**
 * print_diagsums - function that prints the sum of the two diagonal ...
 * @a: pinter to pointer
 * @size: variable for array size
 */
#include "main.h"
void print_diagsums(int *a, int size)
{
	int ts, i = 0;
	int sum1 = 0, sum2 = 0;

	ts = size * size;
	while (i < ts)
	{
		sum1 += a[i];
		i += size + 1;
	}
	i = size - 1;
	while (i <= ts - size)
	{
		sum2 += a[i];
		i += size - 1;
	}
	printf("%d,%d\n", sum1, sum2);
}

