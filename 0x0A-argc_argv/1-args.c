/**
 * main - program that prints the number of arguments passed into it
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0.
 */
#include <stdio.h>
#include "main.h"
int main(int argc, char **argv[])
{
	if (**argv != '\0')
		printf("%d\n", argc -1);
	return (0);
}
