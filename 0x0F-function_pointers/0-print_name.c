/**
 * print_name - function that prints a name
 * @name: string to print
 * @f: this a function pointer, that recieves a string
 * Return: this is a void function no return
 */
#include "function_pointers.h"
#include <stddef.h>
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
