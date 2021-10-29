/**
 * create_array - function that creates an array of chars, and initializes it with a specific char
 * @b: pointer for store
 * Return arrray.
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		b = malloc(sizeof(char) * size);
		if (b == 0)
		{
			return (0);
		}
		else
		{
			for (i = 0; i < size; i++);
			b[i]= c;
		}
	}
	b[i] = '\0';
	return (b);
}
