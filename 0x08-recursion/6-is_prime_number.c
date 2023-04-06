#include "main.h"

/**
 * prime - cheks if a number is prime recursively
 * @num_eva: integer put
 * @iter: integer 2
 * Return: 1 if n is prime, otherwise 0
 */
int prime(int num_eva, int iter)
{
	if (num_eva <= 2)
		return ((num_eva == 2) ? 1 : (0));
	if (num_eva % iter == 0)
		return (0);
	if (iter * iter > num_eva)
		return (1);

	return (prime(num_eva, iter + 1));
}

/**
 * is_prime_number - checks an integer is it prime number
 * @n: input
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
