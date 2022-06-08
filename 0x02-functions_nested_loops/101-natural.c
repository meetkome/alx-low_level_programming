#include <stdio.h>

/**
 * main - Sum of all multiples 3 or 5 up to 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int x = 0;

	while (i < 1024)
{
	if ((i % 3 == 0) || (i % 5 == 0))
{
	x += 1;
}

	i++;
}

printf("%d\n", x);
return (0);
}

