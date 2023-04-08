#include <stdio.h>

/**
 * main - print program name
 * @argc: arguments count
 * @argv: array of args
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
