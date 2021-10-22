/**
 * _pow_recursion - function that returns the value of x raised to ...
 * @x: standar
 * @y: power
 * Return: value y
 */
#include "main.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
