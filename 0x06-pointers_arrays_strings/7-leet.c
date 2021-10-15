/**
 * leet - convert string to leet speak
 * @c: string to convert
 * Return: string c
 */
#include "main.h"
char *leet(char *c)
{
	int i, j;
	char *replace;

	replace = "aAeEoOtTlL4433007711";
	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[i] == replace[j])
				c[i] = replace[j + 10];
		}
	}
	return (c);
}
