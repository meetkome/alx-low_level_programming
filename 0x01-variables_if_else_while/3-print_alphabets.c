#include <stdio.h>
/**
 * main - Entry point, prints alphabet in lower case and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
char space = '\n';
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(toupper(ch));
}

putchar(space);
return(0);
}
