/**
 * main - Function that checks for lowercase character
 * Return: 0 otherwise
 * Return: 1 if c is lower case
 */
#include "main.h"
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
