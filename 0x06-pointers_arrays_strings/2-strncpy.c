/**
 * _strncpy - concatenates two strings n & s
 * @dest: dest string
 * @src: src string 
 * @n: int n to copy
 * Return: pointer to resulting string
 */
#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
