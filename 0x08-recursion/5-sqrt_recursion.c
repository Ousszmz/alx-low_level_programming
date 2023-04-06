#include "main.h"
/**
 * _scqwear - returns the natural square root of a number, helper func
 * @num: an integer parameter
 * @o: an integer parameter
 *
 * Return: an integer
 */
int _scqwear(int num, int o)
{
	if (o % (num / o) == 0)
	{
		if (o * (num / o) == num)
		{
			return (o);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + _scqwear(num, (o + 1)));
}
/**
 * _sqrt_recursion - get the square root of a number
 * @n: an integer parameter
 * Return: the result of the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_scqwear(n, 2));
}
