#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char const *argv[])
{
	while (argv[argc])
		argc++;
	printf("%d\n", argc - 1);
	return (0);
}
