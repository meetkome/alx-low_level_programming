#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
int n;

for (n =0 ; n < 10 ; n++)
{
	putchar(n);
if (n < 9)
{
	putchar(',');
	putchat(' ');
}
}
putchar('\n');

return (0);
}
