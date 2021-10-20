/**
 * _strstr - function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: aux value
 */
#include "main.h"
char *_strstr(char *haystack, char *needle)
{
	char *aux;
	int i, j;

	i = 0;
	j = 0;
	while (haystack[i] != '\n')
	{
		if (haystacks[i] == needle[j])
		{
			aux = &haystack[i];
			while (needle[i] != '\0')
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
	{
		return (aux);
	}
	else
	{
		return (NULL);
	}
}
