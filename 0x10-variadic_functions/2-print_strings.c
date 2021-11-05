/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: pointer that has a string separator
 * @n: number of args
 * Return: void
 */
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		else if (i == (n - 1))
			continue;
		else
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
