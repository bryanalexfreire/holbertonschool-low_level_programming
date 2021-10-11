/**
 * rev_string - function that reverses a string
 * @s: pinter int type
 * Return: always 0.
 */
#include "main.h"
#include <stdio.h>
void rev_string(char *s)
{
	int i, j;
	char temp[500];

	for (i = 0; *s != '\0'; i++)
	{
		temp[i] = *s;
		s++;
	}
	s--;
	for (j = 0; j != i; j++)
	{
		*s = temp[j];
		s--;
	}
	s++;
}
