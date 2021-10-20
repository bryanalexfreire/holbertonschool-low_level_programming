/**
 */
#include "main.h"
void print_diagsums(int *a, int size)
{
	int ts, i;
	int sum1, sum2;
	
	ts = size * size;
	i = 0;
	sum1 = 0;
	sum2 = 0;
	while (i < ts)
	{
		sum1 += a[i];
		i = i + size + 1;
	}
	i = size - 1;
	while (i <= ts - size)
	{
		sum2 += a[i];
		i = i + size - 1;
	}
	printf("%d,%d\n", sum1, sum2);
}

