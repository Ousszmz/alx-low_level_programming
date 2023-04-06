#include "main.h"

/**
 * get_sqrt_root - get the natural square root of a number
 * @n: number to calculate the sqaure root of
 * @guess: sqaure root
 * Return: the resulting square root
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	else if (i * i < n)
	{
		return (_evaluate(i + 1, n));
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (-1);
return (-1);
}
/**
 * _sqrt_recursion - find square root of given number
 * @n: given number
 * Return: square root | if does not exitst (-1)
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
	return (_sqhelp(n, 2));
}
