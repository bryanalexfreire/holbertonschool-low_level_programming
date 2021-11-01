/**
 * main - defines a macro named SIZE as an abbreviation..
 * Return: 0.
 */
#include "0-object_like_macro.h"
#include <stdio.h>
int main(void)
{
	int s;

	s = 98 + SIZE;
	printf("%d\n", s);
	return (0);
}
