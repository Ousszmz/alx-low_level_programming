#include "main.h"
/**
 * print_alphabet_x10 - lowercase alphabets x10
 * Return: viod
 */
void print_alphabet_x10(void);
int i = 0, j = 97;
while (i < 10)
{
while (j <= 122)
{
_putchar(j);
j++;
}
_putchar('\n');
j = 97;
i++;
}
}
