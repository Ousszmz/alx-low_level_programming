#include "main.h"

/**
 * _pow_recursion - x power to y
 * @x: the base number
 * @y: the power number
 * Return: x to the power of y if y > 0, -1 otherwise.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
