#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
char space = '\n';
for (ch = '0' ; ch <= '9'; ch++)
{
	putchar(ch);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
	putchar(ch);
}
putchar(space);
return (0);
}
