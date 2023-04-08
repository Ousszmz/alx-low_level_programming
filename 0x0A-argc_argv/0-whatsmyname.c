#include "main.h"

/**
 * main - print programm name
 * Description: prints program name.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
