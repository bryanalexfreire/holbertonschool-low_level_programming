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
	int i;
	int j = 0;
	char *ret;
	
	ret = NULL;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == haystack[i])
		{
			ret = &haystack[i - 1];
			while (needle[j] != '\0' && haystack[i] != '\0')
			{
				if (needle[j] == haystack[i])
				{
				       	i++;
					j++
				}
				else
					break;
			}
			if (needle[j] != '\0')
				ret = NULL;
		}
	}
	if (needle[0] != '\0')
		return (ret);
	else
		return (haystack);
}
