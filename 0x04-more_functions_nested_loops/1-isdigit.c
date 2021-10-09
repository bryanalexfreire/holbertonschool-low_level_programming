/**
 * _isdigit - Checks for a digit 0 - 9
 * @c: number
 * Return: Integer
 */
#include "main.h"
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
