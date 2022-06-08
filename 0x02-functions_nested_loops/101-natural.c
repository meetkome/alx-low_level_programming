#include <stdio.h>

/**
 * main - Sum of all multiples 3 or 5 up to 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0, i;

for  (i = 1; i < 1024 ; i++)
	if (i % 3 == 0) || (i % 5 == 0)
		x = x + 1;

printf("%d\n", x);
return (0);
}

