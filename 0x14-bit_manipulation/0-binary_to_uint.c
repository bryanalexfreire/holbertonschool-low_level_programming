/**
 * binary_to_uint - function that converts
 * a binary number to an unsigned int.
 * @b: pointer to value from main function
 * @file 0-binary_to_uint.c
 * @author Bryan Freire
 * @version 0.1
 * @date 2021-11-19
 * @copyright Copyright (c) 2021
 * Return: count - decimal number
 */
#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		count <<= 1;
		if (b[i] == '1')
			count += 1;
		i++;
	}
	return (count);
}
