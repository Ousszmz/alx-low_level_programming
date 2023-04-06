#include "main.h"
/**
 * osm - find length of string
 * @s: pointer prameter string
 * Return: length (int)
 */
int osm(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + osm(s + 1));
}

/**
 * pal - compare two character of given string
 * @s: string
 * @i: 1er index
 * @j: 2nd index
 * Return: result
 */
int pal(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (pal(s, ++i, --j));
}

/**
 * is_palindrome - checks if it is a palindrome
 * @s: string pointer
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int i;

	i = osm(s);
	if (!i)
		return (1);
	return (pal(s, 0, i - 1));
}
