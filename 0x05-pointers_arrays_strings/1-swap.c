/**
 * swap_int - function that swaps the values of two integers
 * @a: is a pointer int type
 * @b: is a pointer int type
 * Return: always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
