/**
 * _isalpha - function that checks for alphabetic character.
 * @c: caracter to be checked.
 * Return: 0 otherwise, 1 if c is a letter lower or uppercase
 */
#include "main"
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
