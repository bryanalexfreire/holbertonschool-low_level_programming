/**
 * exponent - x to the power of y
 * @x: base number
 * @y: exponent
 * Return: x^y
 */
int exponent(int x, int y)
{
	int power;

	power = x;
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	while (y >= 2)
	{
		power  = power * x;
		y--;
	}
	return (power);
}
