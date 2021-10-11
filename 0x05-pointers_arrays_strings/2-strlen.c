/**
 * main	- check function that returns the length of a string.
 * Always 0.
 */
#include "main.h"
#include <stdio.h>
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = strlen(str);
	printf("%d\n", len);
	return (0);
}
