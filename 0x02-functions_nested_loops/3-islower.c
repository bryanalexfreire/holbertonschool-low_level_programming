/**
 * _islower - Function that checks for lowercase character
 * @c: character to test.
 * Return: 1 if c is lower case, 0 if it is not a lower letter.
 */
#include "main.h"
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
