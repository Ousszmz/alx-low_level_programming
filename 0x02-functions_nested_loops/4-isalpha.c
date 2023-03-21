#include "main.h"

/**
 * _islower - check alphabets
 * @c: the char should be checked
 * Return:  1 to lowercases or uppercases , 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 97 && c <= 122) ||  (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
