/**
 * _strstr - function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: aux value
 */
#include "main.h"
#include <stddef.h>
char *_strstr(char *haystack, char *needle)
{
	char *aux;
	int i, j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			aux = &haystack[i];
			while (needle[j] != '\0')
			{
				i++;
				j++;
				if (haystack[i] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				break;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	if (needle[j] == '\0')
	{
		return (aux);
	}
	else
	{
		return (NULL);
	}
}
