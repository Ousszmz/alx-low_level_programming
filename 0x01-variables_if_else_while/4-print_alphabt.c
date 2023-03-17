#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;
for (x = 'a';x <= 'd';x++)
putchar (x);
for (x = 'f';x <= 'p';x++)
putchar (x);
for (x = 'r';x <= 'z';x++)
putchar (x);
putchar ('\n');
return (0);
}
