#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */


int main(void)
{
	int ch = 0;
while (ch <= 99)
{
	putchar(ch / 10 + '0');
	putchar(ch % 10 + '0');
if (ch != 99)
{
	putchar(',');
	putchar(' ');
}
ch++;
}
putchar('\n');
return (0);
}
