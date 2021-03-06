/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: num of args
 * Return: sum
 */
#include "variadic_functions.h"
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	int i = 0, sum = 0;
	va_list var;

	va_start(var, n);
	for (i = 0; i < (int) n; i++)
		sum += va_arg(var, int);
	va_end(var);
	return (sum);
}
