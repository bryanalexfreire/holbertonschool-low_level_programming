/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer for string
 * Return: sum characters
 */
#include "main.h"
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return(_strlen_recursion(s)+1);
	}
}
