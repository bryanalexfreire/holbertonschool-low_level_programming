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
	unsigned int i = 0, j = 0;

	if (needle[j] != '\0')
	{
		while (haystack[i] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				aux = &haystack[i - 1];
				while (needle[j] != '\0')
				{
					i++;
					j++;
					if (haystack[i] != needle[j])
						break;
				}
			}
			else
			{
				j = 0;
				i++;
			}
		}
		if (needle[j] == '\0')
			return (aux);
		else
			return (NULL);
	}
	else
	{
		return (haystack);
	}
}
