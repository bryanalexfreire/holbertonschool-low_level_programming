/**
 * int_index - function that searches for an integer
 * @array: the array to find the index
 * @size: the size of the array
 * @cmp: this a function pointer
 * Return: this is a void function no return
 */
#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
