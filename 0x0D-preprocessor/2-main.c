/**
 * main - program that prints the name of the file it was compiled...
 * @exp: show expression
 * Return: 0.
 */
#include <stdio.h>
#define name(exp) printf(#exp"2-main.c")
int main(void)
{
	name();
	return (0);
}
