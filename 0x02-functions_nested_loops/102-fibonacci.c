#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int num, b = 1, c = 2, sum = 50;
	for (num = 1; num <= (sum / 2); num++)

{
	printf("%li %li ", b, c);
	b += c;
	c += b;
}
if (sum % 2 == 1)
printf("%li", b);
printf("\n");
return (0);
}
