#include "main.h"

/**
 * _islower - check alphabets
 * @c: the char should be checked
 * Return:  1 to lowercases or uppercases , 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') ||  (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
